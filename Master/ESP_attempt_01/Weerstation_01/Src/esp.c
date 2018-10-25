/*
 * esp.c
 *
 *  Created on: 4 Oct 2018
 *      Author: djans
 */
#define _SVID_SOURCE

#include "esp.h"
#include <string.h>
#include "cmsis_os.h"
#include <stdlib.h>
#include <stdio.h>

#define HOST "api.thingspeak.com"
#define API "HGTIQJOVPEUS11HG"
#define PORT "80"


void setup_Connection()
{
	UART_Send_Command( "AT+CWMODE=1\r\n", 500, "OK\r\n" );
	osDelay(100);
	UART_Send_Command( "AT+CWJAP=\"AndroidHotspot1411\",\"Weetjeniet1\"\r\n", 2000, "OK\r\n" );
}

void UART_Send_Command( char *command, int timeout, char *fdbk )
{
	  HAL_UART_Transmit( bus, command, strlen(command), timeout );

	  //while( UART_Read_String(fdbk, timeout) != 1 );
}

int UART_Read_String( char *read, int timeout )
{
	int size = strlen( read );
	char buff[size];

	do
	{
		HAL_UART_Receive( bus, buff, size, timeout );
	} while( !(buff[0] == 'O' && buff[1] == 'K') );

	return 1;
}

void set_UART_Bus( UART_HandleTypeDef *uartBus )
{
	bus = uartBus;
}

UART_HandleTypeDef *get_UART_Bus()
{
	return bus;
}

void uploadValues( float Tem, float Pre, float Hum )
{
	char postData[100];
	memset( postData, '\0', sizeof(postData) );
	char strTem[8];
	gcvt( Tem, 8, strTem );
	char strPre[8];
	gcvt( Pre, 8, strPre );
	char strHum[8];
	gcvt( Hum, 8, strHum );
	sprintf( postData, "GET /update?api_key=HGTIQJOVPEUS11HG&Temp=%s&Vocht=%s&Druk=%s", strTem, strPre, strHum );

	char *cmdStart = "AT+CIPSTART=\"TCP\",\"api.thingspeak.com\",80\r\n";
	UART_Send_Command( cmdStart, 2000, "OK\r\n" );

	osDelay(10);

	char cmdSend[100];
	memset( cmdSend, '\0', sizeof(cmdSend) );
	sprintf( cmdSend, "AT+CIPSEND=0,%d\r\n", strlen(postData) + 4);
	UART_Send_Command( cmdSend, 1000, "OK\r\n");

	osDelay(10);

	UART_Send_Command( postData, 1000, "OK\r\n" );
	UART_Send_Command( "AT+CIPCLOSE=0\r\n", 1000, "OK\r\n" );
}

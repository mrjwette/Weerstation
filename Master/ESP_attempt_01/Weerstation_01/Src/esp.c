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

#define HOST "rememberseptember1944.nl"
#define PORT "80"

//#define SSID "Ziggo52CD1C9"
//#define PASS "Jhw65vChfdys"

#define SSID "HOTSPOT VAN DIMITRI"
#define PASS "Casisgay"

void setup_Connection()
{
	UART_Send_Command( "AT+CWMODE=1\r\n", 500, "OK\r\n" );
	char conCom[100];
	sprintf( conCom, "AT+CWJAP=\"%s\",\"%s\"\r\n", SSID, PASS );
	UART_Send_Command( conCom, 2000, "OK\r\n" );
}

void UART_Send_Command( char *command, int timeout, char *fdbk )
{
	HAL_UART_Transmit( bus, command, strlen(command), timeout );

	UART_Read_String(fdbk, timeout);
}

int UART_Read_String( char *read, int timeout )
{
	char buff[100];
	memset( buff, '\0', sizeof(buff) );

	int checkBuff;

	while( 1 )
	{
		checkBuff = HAL_UART_Receive( bus, buff, 100, timeout );

		if( checkBuff == 0xA0 )
			return 0;
		if( strstr( buff, read ))
			return 1;
	}
}

void set_UART_Bus( UART_HandleTypeDef *uartBus )
{
	bus = uartBus;
}

UART_HandleTypeDef *get_UART_Bus()
{
	return bus;
}

//, strTem, strPre, strHum

void uploadValues( float Tem, float Pre, float Hum )
{
	char postData[128];
	//memset( postData, '\0', sizeof(postData) );
	char strTem[8];
	gcvt( Tem, 8, strTem );
	char strPre[8];
	gcvt( Pre, 8, strPre );
	char strHum[8];
	gcvt( Hum, 8, strHum );
	sprintf( postData, "POST /OperationWeerstation/weer.php?Temp=%s&Vocht=%s&Druk=%s HTTP/1.1\r\n"
			"Host: rememberseptember1944.nl\r\n\r\n", strTem, strPre, strHum );

	char *cmdStart = "AT+CIPSTART=\"TCP\",\"rememberseptember1944.nl\",80\r\n";
	UART_Send_Command( cmdStart, 10000, "OK\r\n" );

	char cmdSend[100];
	memset( cmdSend, '\0', sizeof(cmdSend) );
	sprintf( cmdSend, "AT+CIPSEND=%d\r\n", strlen(postData) );
	UART_Send_Command( cmdSend, 500, "OK");

	UART_Send_Command( postData, 500, "</body>" );
	UART_Send_Command( "AT+CIPCLOSE=0\r\n", 1000, "OK" );
}
/*
 * esp.c
 *
 *  Created on: 4 Oct 2018
 *      Author: djans
 */

#include "esp.h"
#include <string.h>
#include "cmsis_os.h"

#define HOST "api.thingspeak.com"
#define API "HGTIQJOVPEUS11HG"
#define PORT "80"


void setup_Connection()
{
	UART_Send_Command( "AT+CWMODE=1\r\n", 500 );
	osDelay(100);
	UART_Send_Command( "AT+CWJAP=\"Ziggo52CD1C9\",\"Jhw65vChfdys\"\r\n", 2000 );
}

void UART_Send_Command( char *command, int timeout )
{
	  HAL_UART_Transmit( bus, command, strlen(command), timeout );
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
	sprintf( postData, "GET /update?api_key=HGTIQJOVPEUS11HG&Temp=%.1f&Vocht=%.1f&Druk=%.1f", Tem, Pre, Hum );

	char *cmdStart = "AT+CIPSTART=\"TCP\",\"api.thingspeak.com\",80\r\n";
	UART_Send_Command( cmdStart, 2000 );

	osDelay(10);

	char cmdSend[100];
	memset( cmdSend, '\0', sizeof(cmdSend) );
	sprintf( cmdSend, "AT+CIPSEND=0,%d\r\n", strlen(postData) + 4);
	UART_Send_Command( cmdSend, 1000);

	osDelay(10);

	UART_Send_Command( postData, 1000 );
	UART_Send_Command( "AT+CIPCLOSE=0\r\n", 1000 );
}

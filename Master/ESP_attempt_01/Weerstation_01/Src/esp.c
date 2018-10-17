/*
 * esp.c
 *
 *  Created on: 4 Oct 2018
 *      Author: djans
 */

#include "esp.h"
#include <string.h>

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

void uploadValues( float x, float y, float z )
{

}

void sendData( char * buff )
{
	int size = strlen(buff);

	char *b;
	sprintf(b, "AT+CIPSEND=0,%d", size );

	UART_Send_Command( b, 500);
	UART_Send_Command( buff, 1000 );
}

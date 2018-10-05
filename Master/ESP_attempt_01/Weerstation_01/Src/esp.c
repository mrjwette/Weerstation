/*
 * esp.c
 *
 *  Created on: 4 Oct 2018
 *      Author: djans
 */

#include "esp.h"
#include <string.h>

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
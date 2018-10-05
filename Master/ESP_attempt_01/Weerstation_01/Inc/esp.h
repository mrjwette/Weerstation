/*
 * esp.h
 *
 *  Created on: 4 Oct 2018
 *      Author: djans
 */

#ifndef ESP_H_
#define ESP_H_

#include "stm32f0xx_hal.h"

UART_HandleTypeDef *bus;

void UART_Send_Command( char *command, int timeout );

void set_UART_Bus( UART_HandleTypeDef *uartBus );
UART_HandleTypeDef *get_UART_Bus();

#endif /* ESP_H_ */
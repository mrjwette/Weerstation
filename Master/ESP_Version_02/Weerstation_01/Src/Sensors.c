/*
 * Sensors.c
 *
 *  Created on: 5 okt. 2018
 *      Author: Dominic
 */

#include "Sensors.h"
#include "stm32f0xx_hal.h"
#include "stm32f0xx_hal_i2c.h"
#include "bmp280.h"


unsigned char sentData [5];
unsigned char receiveData [2];
float measurement = 0;
float press = 0;
float temp = 0;
float hum = 0;
unsigned char adress = 0;

I2C_HandleTypeDef hi2c1;
BMP280_HandleTypedef bmp280;

/*	Sends the command to start measuring the humidity to the SI7021 sensor and reads the responding data.
 * 	After this it calculates the actual humidity with the received data and a formula and returns the value.
 */
float measureHumidity(){
	adress = 0x80;
	sentData[0] = 0xF5;
	sentData[1] = adress;
	sentData[2] = adress;
	HAL_I2C_Master_Transmit(&hi2c1, adress, sentData, 3, 100);
	HAL_Delay(20);
	HAL_I2C_Master_Receive(&hi2c1, adress, receiveData, 2, 100);
	measurement = receiveData[0] << 8 | receiveData[1];
	return ((125 * measurement)/65536)-6;
}

/*	Sends the command to start measuring the humidity to the SI7021 sensor and reads the responding data.
 * 	After this it calculates the actual humidity with the received data and a formula and returns the value.
 */
float measureTemperature(){
	adress = 0x80;
	sentData[0] = 0xF3;
	sentData[1] = adress;
	sentData[2] = adress;
	HAL_I2C_Master_Transmit(&hi2c1, adress, sentData, 3, 100);
	HAL_Delay(20);
	HAL_I2C_Master_Receive(&hi2c1, adress, receiveData, 2, 100);
	measurement = receiveData[0] << 8 | receiveData[1];
	return ((175.72 * measurement)/65536)-46.85;
}


/*	executes the function to read the values from the bmp280 sensor and stores it in a float.
 * 	Returns the float.
*/
float measurePressure(){
	HAL_Delay(100);
	bmp280_read_float(&bmp280, &temp, &press, &hum);
	return press;
}

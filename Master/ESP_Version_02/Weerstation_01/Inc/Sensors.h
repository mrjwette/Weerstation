/*
 * Sensors.h
 *
 *  Created on: 5 okt. 2018
 *      Author: Dominic
 */

#ifndef SENSORS_H_
#define SENSORS_H_

#include "bmp280.h"

BMP280_HandleTypedef bmp280;

float measureHumidity();
float measureTemperature();
float measurePressure();

#endif /* SENSORS_H_ */

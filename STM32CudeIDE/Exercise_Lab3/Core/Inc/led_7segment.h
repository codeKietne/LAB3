/*
 * led_7segment.h
 *
 *  Created on: Oct 28, 2024
 *      Author: Nguyen Quoc Kiet
 */

#ifndef INC_LED_7SEGMENT_H_
#define INC_LED_7SEGMENT_H_

#include "main.h"
#include "global.h"
#define MAX_MATRIX 10
#define MAX_BUFF 4

void display7SEG(int number);
void updateClockBuffer(int, int);
void scanLed();

#endif /* INC_LED_7SEGMENT_H_ */

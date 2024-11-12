/*
 * global.h
 *
 *  Created on: Oct 28, 2024
 *      Author: Nguyen Quoc Kiet
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "traffic_light.h"
#include "input_reading.h"

extern int timeRed;
extern int timeGreen;
extern int timeYellow;

extern int tempRed;
extern int tempGreen;
extern int tempYellow;

extern int preTimeRed;
extern int preTimeGreen;
extern int preTimeYellow;


extern int defaultTimeRed;
extern int defaultTimeGreen;
extern int defaultTimeYellow;

#define INIT 1
#define AUTO_RED_GREEN 	2
#define AUTO_RED_YELLOW 3
#define AUTO_GREEN_RED 	4
#define AUTO_YELLOW_RED 5

#define MODE1 10
#define MODE2 11
#define MODE3 12
#define MODE4 13


extern int status;



#endif /* INC_GLOBAL_H_ */

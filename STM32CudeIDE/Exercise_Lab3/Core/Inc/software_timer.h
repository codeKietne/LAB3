/*
 * software_timer.h
 *
 *  Created on: Oct 28, 2024
 *      Author: Nguyen Quoc Kiet
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "main.h"
#include "input_reading.h"

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;

void setTimer1(int);
void setTimer2(int);
void setTimer3(int);

void timer_run(void);


#endif /* INC_SOFTWARE_TIMER_H_ */


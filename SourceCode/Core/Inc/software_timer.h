/*
 * software_timer.h
 *
 *  Created on: Oct 29, 2023
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

void timerRun();

extern int timer_flag0;
extern int timer_flag1;
extern int timer_flag2;
void setTimer0(int duration);
void setTimer1(int duration);
void setTimer2(int duration);
void clearTimer(int key);
//extern int timer_flag[3];
//void setTimer(int duration, int key);

#endif /* INC_SOFTWARE_TIMER_H_ */

/*
 * software_timer.h
 *
 *  Created on: Oct 29, 2023
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag; //flag 1 de chuyen den
extern int timer2_flag; //flag 2 de display len led 7 doan
extern int timer3_flag; //flag 3 de count down 10s neu kh nhan nut se tu dong quay ve normal mode

void setTimer1(int duration);	//set timer cho den
void setTimer2(int duration);	//set timer cho led 7 doan
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */

/*
 * software_timer.c
 *
 *  Created on: Oct 29, 2023
 *      Author: Admin
 */

#include "software_timer.h"

int timer_count=0;
int timer_flag=0;

void setTimer(int duration){
	timer_count=duration;
	timer_flag=0;
}

void timerRun(){
	if(timer_counter > 0){
		timer_counter--;
		if(timer_counter <= 0){
			timer_flag=1;
		}
	}
}

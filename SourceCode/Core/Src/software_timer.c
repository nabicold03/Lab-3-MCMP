/*
 * software_timer.c
 *
 *  Created on: Oct 29, 2023
 *      Author: Admin
 */

#include "software_timer.h"
#define TICK 10

int timer_counter0=0;
int timer_flag0=0;
void setTimer0(int duration){
	timer_counter0=duration/TICK;
	timer_flag0=0;
}

int timer_counter1=0;
int timer_flag1=0;
void setTimer1(int duration){
	timer_counter1=duration/TICK;
	timer_flag1=0;
}

int timer_counter2=0;
int timer_flag2=0;
void setTimer2(int duration){
	timer_counter2=duration/TICK;
	timer_flag2=0;
}

void timerRun(){
	if(timer_counter0>0){
		timer_counter0--;
		if(timer_counter0 <= 0){
			timer_flag0=1;
		}
	}
	if(timer_counter1>0){
		timer_counter1--;
		if(timer_counter1 <= 0){
			timer_flag1=1;
		}
	}
	if(timer_counter2>0){
		timer_counter2--;
		if(timer_counter2 <= 0){
			timer_flag2=1;
		}
	}
}

void clearTimer(int key){
	if(key==0){
		timer_flag0=0;
		timer_counter0=0;
	} else if(key==1){
		timer_flag1=0;
		timer_counter1=0;
	} else {
		timer_flag2=0;
		timer_counter2=0;
	}
}

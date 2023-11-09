/*
 * software_timer.c
 *
 *  Created on: Oct 29, 2023
 *      Author: Admin
 */

#include "software_timer.h"
#define TICK 10

int timer_counter[3]={0,0,0};
int timer_flag[3]={0,0,0};
void setTimer(int key, int duration){
	timer_counter[key]=duration/TICK;
	timer_flag[key]=0;
}
void timerRun(){
	for(int i=0; i<3; i++){
		if(timer_counter[i]>0){
			timer_counter[i]--;
			if(timer_counter[i]<=0){
				timer_flag[i]=1;
			}
		}
	}
}

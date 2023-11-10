/*
 * fsm.c
 *
 *  Created on: Oct 29, 2023
 *      Author: Admin
 */

#include"fsm.h"
int index_led=0;
int current_led_1;
int current_led_2;
void fsm_run(){
	switch(status){
		case INIT:
			//TODO

			//setup environment
			status=Gr1andRe2;
			current_led_1=Sevsegbuffer[2];
			current_led_2=Sevsegbuffer[0];
			updateClockBuffer(current_led_1, current_led_2);
			setTimer(0,current_led_1*1000);
			setTimer(1,1000);
			setTimer(2,200);
			break;
		case Gr1andRe2:
			//TODO

			//turn on led
			Gr1_Re2();

			//setup environment
			if(timer_flag[0]==1){
				status=Ye1andRe2;
				current_led_1=Sevsegbuffer[1];
				setTimer(0,current_led_1*1000);
			}
			if(timer_flag[1]==1){
				updateClockBuffer(current_led_1,current_led_2);
				current_led_1--;
				current_led_2--;
				setTimer(1,1000);
			}
			if(timer_flag[2]==1){
				update7seg(index_led);
				if(index_led >= 3){
					index_led=0;
				} else index_led++;
				setTimer(2,200);
			}
			if(isButtonPressed(0)){
				status=MAN_RED;
				setTimer(0,10000);
			}
			break;
		case Ye1andRe2:
			//TODO

			//turn on led
			Ye1_Re2();

			//setup environment
			if(timer_flag[0]==1){
				status=Re1andGr2;
				current_led_1=Sevsegbuffer[0];
				current_led_2=Sevsegbuffer[2];
				setTimer(0,current_led_2*1000);
			}
			if(timer_flag[1]==1){
				updateClockBuffer(current_led_1,current_led_2);
				setTimer(1,1000);
				current_led_1--;
				current_led_2--;
			}
			if(timer_flag[2]==1){
				update7seg(index_led);
				if(index_led >= 3){
					index_led=0;
				} else index_led++;
				setTimer(2,200);
			}
			if(isButtonPressed(0)){
				status=MAN_RED;
				setTimer(0,10000);
			}
			break;
		case Re1andGr2:
			//TODO

			//turn on led
			Re1_Gr2();

			//display 7segment led

			//setup environment
			if(timer_flag[0]==1){
				status=Re1andYe2;
				current_led_2=Sevsegbuffer[1];
				setTimer(0,current_led_2*1000);
			}
			if(timer_flag[1]==1){
				setTimer(1,1000);
				updateClockBuffer(current_led_1, current_led_2);
				current_led_1--;
				current_led_2--;
			}
			if(timer_flag[2]==1){
				update7seg(index_led);
				if(index_led >= 3){
					index_led=0;
				} else index_led++;
				setTimer(2,200);
			}
			if(isButtonPressed(0)){
				status=MAN_RED;
				setTimer(0,10000);
			}
			break;
		case Re1andYe2:
			//TODO

			//turn on led
			Re1_Ye2();

			//display 7segment led

			//setup environment
			if(timer_flag[0]==1){
				status=Gr1andRe2;
				current_led_1=Sevsegbuffer[2];
				current_led_2=Sevsegbuffer[0];
				setTimer(0,current_led_1*1000);
			}
			if(timer_flag[1]==1){
				setTimer(1,1000);
				updateClockBuffer(current_led_1, current_led_2);
				current_led_1--;
				current_led_2--;
			}
			if(timer_flag[2]==1){
				update7seg(index_led);
				if(index_led >= 3){
					index_led=0;
				} else index_led++;
				setTimer(2,200);
			}
			if(isButtonPressed(0)){
				status=MAN_RED;
				setTimer(0,10000);
			}
			break;
		default:
			break;
	}
}

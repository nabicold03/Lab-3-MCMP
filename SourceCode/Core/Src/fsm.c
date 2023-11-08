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
			current_led_1=Sevsegbuffer1[2];
			current_led_2=Sevsegbuffer2[0];
			updateClockBuffer(current_led_1, current_led_2);
			setTimer1(current_led_1*1000);	//set timer 1 Gr1andRe2
			setTimer2(1000);			//set timer 2 updateClockBuffer
			setTimer3(200);				//set timer 3 update7seg
			break;
		case Gr1andRe2:
			//TODO

			//turn on led
			Gr1_Re2();

			//setup environment
			if(timer1_flag==1){
				status=Ye1andRe2;
				current_led_1=Sevsegbuffer1[1];
				setTimer1(current_led_1*1000);
			}
			if(timer2_flag==1){
				updateClockBuffer(current_led_1,current_led_2);
				current_led_1--;
				current_led_2--;
				setTimer2(1000);
			}
			if(timer3_flag==1){
				update7seg(index_led);
				if(index_led >= 3){
					index_led=0;
				} else index_led++;
				setTimer3(200);
			}
			if(isButton1Pressed()){
				status=MAN_RED;
				setTimer1(10000);
			}
			break;
		case Ye1andRe2:
			//TODO

			//turn on led
			Ye1_Re2();

			//setup environment
			if(timer1_flag==1){
				status=Re1andGr2;
				current_led_1=Sevsegbuffer1[0];
				current_led_2=Sevsegbuffer2[2];
				setTimer1(current_led_2*1000);
			}
			if(timer2_flag==1){
				updateClockBuffer(current_led_1,current_led_2);
				setTimer2(1000);
				current_led_1--;
				current_led_2--;
			}
			if(timer3_flag==1){
				update7seg(index_led);
				if(index_led >= 3){
					index_led=0;
				} else index_led++;
				setTimer3(200);
			}
			if(isButton1Pressed()){
				status=MAN_RED;
				setTimer1(10000);
			}
			break;
		case Re1andGr2:
			//TODO

			//turn on led
			Re1_Gr2();

			//display 7segment led

			//setup environment
			if(timer1_flag==1){
				status=Re1andYe2;
				current_led_2=Sevsegbuffer2[1];
				setTimer1(current_led_2*1000);
			}
			if(timer2_flag==1){
				setTimer2(1000);
				updateClockBuffer(current_led_1, current_led_2);
				current_led_1--;
				current_led_2--;
			}
			if(timer3_flag==1){
				update7seg(index_led);
				if(index_led >= 3){
					index_led=0;
				} else index_led++;
				setTimer3(200);
			}
			if(isButton1Pressed()){
				status=MAN_RED;
				setTimer1(10000);
			}
			break;
		case Re1andYe2:
			//TODO

			//turn on led
			Re1_Ye2();

			//display 7segment led

			//setup environment
			if(timer1_flag==1){
				status=Gr1andRe2;
				current_led_1=Sevsegbuffer1[2];
				current_led_2=Sevsegbuffer2[0];
				setTimer1(current_led_1*1000);
			}
			if(timer2_flag==1){
				setTimer2(1000);
				updateClockBuffer(current_led_1, current_led_2);
				current_led_1--;
				current_led_2--;
			}
			if(timer3_flag==1){
				update7seg(index_led);
				if(index_led >= 3){
					index_led=0;
				} else index_led++;
				setTimer3(200);
			}
			if(isButton1Pressed()){
				status=MAN_RED;
				setTimer1(10000);
			}
			break;
		default:
			break;
	}
}

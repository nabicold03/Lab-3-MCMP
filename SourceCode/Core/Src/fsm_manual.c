/*
 * fsm_manual.c
 *
 *  Created on: Oct 30, 2023
 *      Author: Admin
 */

#include"fsm_manual.h"

int current;
int index;
void fsm_manual_run(){
	switch(status){
		case MODE_2:
			clearTimer(0);	//clear timer 0
			status=MAN_RED;	//change to man_red
			setTimer1(250);	//blink led
			current=1;		//this var is used as counter up from 1 to 99 (for increment btn 2)
			setTimer2(100);	//display 7seg
			index=0;
			turnoffall();	//turn off all led
			updateClockBuffer(2, current);	//updatebuffer to show up mode 2 and the value of time
			break;
		case MAN_RED:
			//TODO

			//set environment
			if(timer_flag0==1){	//timer_flag0 is set -> comeback to mode 1
				status=MODE_1;
			}
			if(timer_flag1==1){	//blink led every 250ms
				blinky0();
				setTimer1(250);
			}
			if(timer_flag2==1){	//display each 7seg sequentially after 200ms
				update7seg(index);
				if(index >= 3){
					index=0;
				} else index++;
				setTimer2(100);
			}
			if(isButtonPressed(0)==1){	//press btn 0 -> change to mode 3
				status=MODE_3;
			}
			if(isButtonPressed(1)==1){	//increase current and display to 7seg
				if(btn2hold==1){
					current+=5;
				} else current++;
				if(current>99) current=1;	//if current>99 => reassign 1 to it
				updateClockBuffer(2, current);	//display Mode 2 and time to 7seg
			}
			if(isButtonPressed(2)==1){	//set value
				//set value
				updateSevsegbuffer(0, current);	//update value of RED time
				if(alteb(Sevsegbuffer[0],Sevsegbuffer[1])==1){	//RED <= YELLOW
					updateSevsegbuffer(1, 1);	//assign 1 to yellow
					updateSevsegbuffer(2, current-1);	//assign RED-YELLOW to GREEN
				} else {	//RED > YELLOW
					updateSevsegbuffer(2, current-Sevsegbuffer[1]);	//update green=red-yellow
				}
				//set environment
				setTimer0(5000);	//after 5000ms of pressing button 3 => comeback to MODE 1
			}
			break;
		case MODE_3:
			clearTimer(0);	//clear timer 0
			status=MAN_YELLOW;	//change to man_red
			setTimer1(250);	//blink led
			current=1;		//this var is used as counter up from 1 to 99 (for increment btn 2)
			setTimer2(100);	//display 7seg
			index=0;
			turnoffall();	//turn off all led
			updateClockBuffer(3, current);	//updatebuffer to show up mode 2 and the value of time
			break;
		case MAN_YELLOW:
			//TODO
			if(timer_flag0==1){	//time_flag0 is set => change to mode 1
				status=MODE_1;
			}
			if(timer_flag1==1){	//blink led every 250ms
				blinky1();
				setTimer1(250);
			}
			if(timer_flag2==1){	//display each 7seg sequentially after 200ms
				update7seg(index);
				if(index >= 3){
					index=0;
				} else index++;
				setTimer2(100);
			}
			if(isButtonPressed(0)==1){	//change mode
				status=MODE_4;
			}
			if(isButtonPressed(1)==1){	//increment
				if(btn2hold==1){
					current+=5;
				} else current++;
				if(current>99) current=1;
				updateClockBuffer(3, current);
			}
			if(isButtonPressed(2)==1){	//setup
				//set value
				updateSevsegbuffer(1, current);
				if(alteb(Sevsegbuffer[0],Sevsegbuffer[1])==1){	//RED <= YELLOW
					updateSevsegbuffer(0, current+Sevsegbuffer[2]);				//red
				} else {	//RED > YELLOW
					HAL_GPIO_TogglePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin);
					updateSevsegbuffer(2, Sevsegbuffer[0]-current);	//update green=red-yellow
				}
				//set environment
				setTimer0(5000);
			}
			break;
		case MODE_4:
			clearTimer(0);
			status=MAN_GREEN;
			setTimer1(250);	//blink led
			current=1;
			setTimer2(100);	//display 7seg
			index=0;
			turnoffall();
			updateClockBuffer(4, current);
			break;
		case MAN_GREEN:
			if(timer_flag0==1){
				status=MODE_1;
			}
			if(timer_flag1==1){
				blinky2();
				setTimer1(250);
			}
			if(timer_flag2==1){
				update7seg(index);
				if(index >= 3){
					index=0;
				} else index++;
				setTimer2(100);
			}
			if(isButtonPressed(0)==1){	//change mode
				status=MODE_1;
			}
			if(isButtonPressed(1)==1){
				if(btn2hold==1){
					current+=5;
				} else current++;
				if(current>99) current=1;
				updateClockBuffer(4, current);
			}
			if(isButtonPressed(2)==1){
				//set value
				updateSevsegbuffer(2, current);
				if(alteb(Sevsegbuffer[0],Sevsegbuffer[2])==1){	//RED <= GREEN
					updateSevsegbuffer(0, current+Sevsegbuffer[1]);		//red=green+yellow			//red
				} else {	//RED > GREEN
					updateSevsegbuffer(1, Sevsegbuffer[0]-current);	//update green=red-yellow
				}
				//set environment
				setTimer0(5000);
			}
			break;
		default:
			break;
	}
}

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
			setTimer0(10000);	//chuyen mode
			status=MAN_RED;
			setTimer1(500);	//blink led
			current=1;
			setTimer2(200);	//display 7seg
			index=0;
			turnoffall();
			updateClockBuffer(2, current);
		case MAN_RED:
			//TODO

			//set environment
			if(timer_flag0==1){
				status=MODE_1;
			}
			if(timer_flag1==1){
				blinky0();
				setTimer1(500);
			}
			if(timer_flag2==1){
				update7seg(index);
				if(index >= 3){
					index=0;
				} else index++;
				setTimer2(200);
			}
			if(isButtonPressed0()==1){	//chuyen mode
				status=MODE_3;
				setTimer0(10000);
			}
			if(isButtonPressed1()==1){
				current++;
				if(current>99) current=1;
				updateClockBuffer(2, current);
			}
			if(isButtonPressed2()==1){
				//set value
				updateSevsegbuffer(0, current);
				if(alteb(Sevsegbuffer[0],Sevsegbuffer[1])==1){	//RED <= YELLOW
					updateSevsegbuffer(1, 1);
					updateSevsegbuffer(2, current-1);
				} else {	//RED > YELLOW
					updateSevsegbuffer(2, current-Sevsegbuffer[1]);	//update green=red-yellow
				}
				//set environment
				setTimer0(10000);
			}
			break;
		case MODE_3:
			setTimer0(10000);	//chuyen mode
			status=MAN_YELLOW;
			setTimer1(500);	//blink led
			current=1;
			setTimer2(200);	//display 7seg
			index=0;
			turnoffall();
			updateClockBuffer(3, current);
		case MAN_YELLOW:
			//TODO
			if(timer_flag0==1){
				status=MODE_1;
			}
			if(timer_flag1==1){
				blinky1();
				setTimer1(500);
			}
			if(timer_flag2==1){
				update7seg(index);
				if(index >= 3){
					index=0;
				} else index++;
				setTimer2(200);
			}
			if(isButtonPressed0()==1){	//chuyen mode
				status=MODE_4;
				setTimer0(10000);
			}
			if(isButtonPressed1()==1){
				current++;
				if(current>99) current=1;
				updateClockBuffer(3, current);
			}
			if(isButtonPressed2()==1){
				//set value
				updateSevsegbuffer(1, current);
				if(alteb(Sevsegbuffer[0],Sevsegbuffer[1])==1){	//RED <= YELLOW
					updateSevsegbuffer(0, current+Sevsegbuffer[2]);				//red
				} else {	//RED > YELLOW
					updateSevsegbuffer(2, current-Sevsegbuffer[1]);	//update green=red-yellow
				}
				//set environment
				setTimer0(10000);
			}
			break;
		case MODE_4:
			setTimer0(10000);	//chuyen mode
			status=MAN_GREEN;
			setTimer1(500);	//blink led
			current=1;
			setTimer2(200);	//display 7seg
			index=0;
			turnoffall();
			updateClockBuffer(4, current);
		case MAN_GREEN:
			if(timer_flag0==1){
				status=MODE_1;
			}
			if(timer_flag1==1){
				blinky2();
				setTimer1(500);
			}
			if(timer_flag2==1){
				update7seg(index);
				if(index >= 3){
					index=0;
				} else index++;
				setTimer2(200);
			}
			if(isButtonPressed0()==1){	//chuyen mode
				status=MODE_1;
				setTimer0(2000);
			}
			if(isButtonPressed1()==1){
				current++;
				if(current>99) current=1;
				updateClockBuffer(4, current);
			}
			if(isButtonPressed2()==1){
				//set value
				updateSevsegbuffer(2, current);
				if(alteb(Sevsegbuffer[0],Sevsegbuffer[2])==1){	//RED <= GREEN
					updateSevsegbuffer(0, current+Sevsegbuffer[1]);		//red=green+yellow			//red
				} else {	//RED > GREEN
					updateSevsegbuffer(1, Sevsegbuffer[0]-current);	//update green=red-yellow
				}
				//set environment
				setTimer0(10000);
			}
			break;
		default:
			break;
	}
}

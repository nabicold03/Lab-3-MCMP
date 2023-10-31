/*
 * fsm.c
 *
 *  Created on: Oct 29, 2023
 *      Author: Admin
 */

#include"fsm.h"
void fsm_run(){
	switch(status){
		case INIT:
			//TODO

			//setup environment
			status=Gr1andRe2;
			setTimer1(3000);	//set timer 1 cho auto_red chay trong 5s
			setTimer2(1000);	//set timer 2 de display len led
			current7seg1=Sevsegbuffer1[2];	//set time for green 1
			current7seg2=Sevsegbuffer2[0];	//set time for red 2
			break;
		case Gr1andRe2:
			//TODO

			//turn on led
			Gr1_Re2();

			//display 7segment led

			//setup environment
			if(timer1_flag==1){
				status=Ye1andRe2;
				setTimer1(2000);
				setTimer2(1000);
				current7seg1=Sevsegbuffer1[1];
			}
			if(timer2_flag==1){
				setTimer2(1000);
				current7seg2--;
				current7seg1--;
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

			//display 7segment led

			//setup environment
			if(timer1_flag==1){
				status=Re1andGr2;
				setTimer1(3000);
				setTimer2(1000);
				current7seg1=Sevsegbuffer1[0];
				current7seg2=Sevsegbuffer2[2];
			}
			if(timer2_flag==1){
				setTimer2(1000);
				current7seg1--;
				current7seg2--;
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
				setTimer1(2000);
				setTimer2(1000);
				current7seg1=Sevsegbuffer1[1];
			}
			if(timer2_flag==1){
				setTimer2(1000);
				current7seg1--;
				current7seg--;
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
				status=INIT;
			}
			if(timer2_flag==1){
				setTimer2(1000);
				current7seg1--;
				current7seg2--;
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

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
			status=Gr1_Re2;
			setTimer1(3000);	//set timer 1 cho auto_red chay trong 5s
			setTimer2(1000);	//set timer 2 de display len led
			break;
		case Gr1_Re2:
			//TODO

			//setup environment
			if(timer1_flag==1){
				status=Ye1_Re2;
				setTimer1(2000);
				setTimer2(1000);
			}
			if(isButton1Pressed()){
				status=MAN_RED;
				setTimer1(10000);
			}
			break;
		case Ye1_Re2:
			//TODO

			//setup environment
			if(timer1_flag==1){
				status=Re1_Gr2;
				setTimer1(3000);
				setTimer2(1000);
			}
			if(isButton1Pressed()){
				status=MAN_RED;
				setTimer1(10000);
			}
			break;
		case Re1_Gr2:
			//TODO

			//setup environment
			if(timer1_flag==1){
				status=Re1_Ye2;
				setTimer1(2000);
				setTimer2(1000);
			}
			if(isButton1Pressed()){
				status=MAN_RED;
				setTimer1(10000);
			}
			break;
		case Re1_Ye2:
			//TODO

			//setup environment
			if(timer1_flag==1){
				status=INIT;
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

/*
 * fsm_manual.c
 *
 *  Created on: Oct 30, 2023
 *      Author: Admin
 */

#include"fsm_manual.h"


void fsm_manual_run(){
	switch(status){
		case MAN_RED:
			//TODO

			//set environment
			if(timer1_flag==1){
				status=Gr1andRe2;
				setTimer1(5000);
			}
			if(isButtonPressed(0)){
				status=MAN_YELLOW;
				setTimer1(10000);
			}
			break;
		case MAN_YELLOW:
			//TODO

			//set environment
			if(timer1_flag==1){
				status=Gr1andRe2;
				setTimer1(5000);
			}
			if(isButtonPressed(0)){
				status=MAN_YELLOW;
				setTimer1(10000);
			}
			break;
		case MAN_GREEN:
			//TODO

			//set environment
			break;
		default:
			break;
	}
}

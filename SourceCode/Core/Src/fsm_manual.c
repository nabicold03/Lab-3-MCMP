/*
 * fsm_manual.c
 *
 *  Created on: Oct 30, 2023
 *      Author: Admin
 */

#include"fsm_manual.h"


void fsm_manual_run(){
	switch(status){
		case AUTO_RED:


			//set environment:
			if(timer_flag[0]==1){
				status=INIT;
			}
		case MAN_RED:
			//TODO

			//set environment
			if(timer_flag[0]==1){
				status=INIT;
			}
			if(isButtonPressed(0)){
				status=MAN_YELLOW;
				setTimer(0,10000);
			}
			break;
		case MAN_YELLOW:
			//TODO

			//set environment
			if(timer_flag[0]==1){
				status=Gr1andRe2;
				setTimer(0,5000);
			}
			if(isButtonPressed(0)){
				status=MAN_YELLOW;
				setTimer(0,10000);
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

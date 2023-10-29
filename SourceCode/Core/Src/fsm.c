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
			status=AUTO_RED;
			setTimer(500);
			break;
		case AUTO_RED:

			break;
		case AUTO_YELLOW:

			break;
		case AUTO_GREEN:

			break;
		default:
			break;
	}
}

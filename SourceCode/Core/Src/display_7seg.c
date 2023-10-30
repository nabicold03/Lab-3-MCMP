/*
 * display_7seg.c
 *
 *  Created on: Oct 30, 2023
 *      Author: Admin
 */

#include"display_7seg.h"

void display7seg1(int number){
	switch(number){
		case 0:
			HAL_GPIO_WritePin(Pin0_GPIO_Port, Pin0_Pin, RESET);
			HAL_GPIO_WritePin(Pin1_GPIO_Port, Pin1_Pin, RESET);
			HAL_GPIO_WritePin(Pin2_GPIO_Port, Pin2_Pin, RESET);
			HAL_GPIO_WritePin(Pin3_GPIO_Port, Pin3_Pin, RESET);
			HAL_GPIO_WritePin(Pin4_GPIO_Port, Pin4_Pin, RESET);
			HAL_GPIO_WritePin(Pin5_GPIO_Port, Pin5_Pin, RESET);
			HAL_GPIO_WritePin(Pin6_GPIO_Port, Pin6_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(Pin0_GPIO_Port, Pin0_Pin, SET);
			HAL_GPIO_WritePin(Pin1_GPIO_Port, Pin1_Pin, RESET);
			HAL_GPIO_WritePin(Pin2_GPIO_Port, Pin2_Pin, RESET);
			HAL_GPIO_WritePin(Pin3_GPIO_Port, Pin3_Pin, SET);
			HAL_GPIO_WritePin(Pin4_GPIO_Port, Pin4_Pin, SET);
			HAL_GPIO_WritePin(Pin5_GPIO_Port, Pin5_Pin, SET);
			HAL_GPIO_WritePin(Pin6_GPIO_Port, Pin6_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(Pin0_GPIO_Port, Pin0_Pin, RESET);
			HAL_GPIO_WritePin(Pin1_GPIO_Port, Pin1_Pin, RESET);
			HAL_GPIO_WritePin(Pin2_GPIO_Port, Pin2_Pin, SET);
			HAL_GPIO_WritePin(Pin3_GPIO_Port, Pin3_Pin, RESET);
			HAL_GPIO_WritePin(Pin4_GPIO_Port, Pin4_Pin, RESET);
			HAL_GPIO_WritePin(Pin5_GPIO_Port, Pin5_Pin, SET);
			HAL_GPIO_WritePin(Pin6_GPIO_Port, Pin6_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(Pin0_GPIO_Port, Pin0_Pin, RESET);
			HAL_GPIO_WritePin(Pin1_GPIO_Port, Pin1_Pin, RESET);
			HAL_GPIO_WritePin(Pin2_GPIO_Port, Pin2_Pin, RESET);
			HAL_GPIO_WritePin(Pin3_GPIO_Port, Pin3_Pin, RESET);
			HAL_GPIO_WritePin(Pin4_GPIO_Port, Pin4_Pin, SET);
			HAL_GPIO_WritePin(Pin5_GPIO_Port, Pin5_Pin, SET);
			HAL_GPIO_WritePin(Pin6_GPIO_Port, Pin6_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(Pin0_GPIO_Port, Pin0_Pin, SET);
			HAL_GPIO_WritePin(Pin1_GPIO_Port, Pin1_Pin, RESET);
			HAL_GPIO_WritePin(Pin2_GPIO_Port, Pin2_Pin, RESET);
			HAL_GPIO_WritePin(Pin3_GPIO_Port, Pin3_Pin, SET);
			HAL_GPIO_WritePin(Pin4_GPIO_Port, Pin4_Pin, SET);
			HAL_GPIO_WritePin(Pin5_GPIO_Port, Pin5_Pin, RESET);
			HAL_GPIO_WritePin(Pin6_GPIO_Port, Pin6_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(Pin0_GPIO_Port, Pin0_Pin, RESET);
			HAL_GPIO_WritePin(Pin1_GPIO_Port, Pin1_Pin, SET);
			HAL_GPIO_WritePin(Pin2_GPIO_Port, Pin2_Pin, RESET);
			HAL_GPIO_WritePin(Pin3_GPIO_Port, Pin3_Pin, RESET);
			HAL_GPIO_WritePin(Pin4_GPIO_Port, Pin4_Pin, SET);
			HAL_GPIO_WritePin(Pin5_GPIO_Port, Pin5_Pin, RESET);
			HAL_GPIO_WritePin(Pin6_GPIO_Port, Pin6_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(Pin0_GPIO_Port, Pin0_Pin, RESET);
			HAL_GPIO_WritePin(Pin1_GPIO_Port, Pin1_Pin, SET);
			HAL_GPIO_WritePin(Pin2_GPIO_Port, Pin2_Pin, RESET);
			HAL_GPIO_WritePin(Pin3_GPIO_Port, Pin3_Pin, RESET);
			HAL_GPIO_WritePin(Pin4_GPIO_Port, Pin4_Pin, RESET);
			HAL_GPIO_WritePin(Pin5_GPIO_Port, Pin5_Pin, RESET);
			HAL_GPIO_WritePin(Pin6_GPIO_Port, Pin6_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(Pin0_GPIO_Port, Pin0_Pin, RESET);
			HAL_GPIO_WritePin(Pin1_GPIO_Port, Pin1_Pin, RESET);
			HAL_GPIO_WritePin(Pin2_GPIO_Port, Pin2_Pin, RESET);
			HAL_GPIO_WritePin(Pin3_GPIO_Port, Pin3_Pin, SET);
			HAL_GPIO_WritePin(Pin4_GPIO_Port, Pin4_Pin, SET);
			HAL_GPIO_WritePin(Pin5_GPIO_Port, Pin5_Pin, SET);
			HAL_GPIO_WritePin(Pin6_GPIO_Port, Pin6_Pin, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(Pin0_GPIO_Port, Pin0_Pin, RESET);
			HAL_GPIO_WritePin(Pin1_GPIO_Port, Pin1_Pin, RESET);
			HAL_GPIO_WritePin(Pin2_GPIO_Port, Pin2_Pin, RESET);
			HAL_GPIO_WritePin(Pin3_GPIO_Port, Pin3_Pin, RESET);
			HAL_GPIO_WritePin(Pin4_GPIO_Port, Pin4_Pin, RESET);
			HAL_GPIO_WritePin(Pin5_GPIO_Port, Pin5_Pin, RESET);
			HAL_GPIO_WritePin(Pin6_GPIO_Port, Pin6_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(Pin0_GPIO_Port, Pin0_Pin, RESET);
			HAL_GPIO_WritePin(Pin1_GPIO_Port, Pin1_Pin, RESET);
			HAL_GPIO_WritePin(Pin2_GPIO_Port, Pin2_Pin, RESET);
			HAL_GPIO_WritePin(Pin3_GPIO_Port, Pin3_Pin, RESET);
			HAL_GPIO_WritePin(Pin4_GPIO_Port, Pin4_Pin, SET);
			HAL_GPIO_WritePin(Pin5_GPIO_Port, Pin5_Pin, RESET);
			HAL_GPIO_WritePin(Pin6_GPIO_Port, Pin6_Pin, RESET);
			break;
		default:
			break;
	}
}

void display7seg2(int number){
	switch(number){
		case 0:
			HAL_GPIO_WritePin(Pin0_2_GPIO_Port, Pin0_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin1_2_GPIO_Port, Pin1_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin2_2_GPIO_Port, Pin2_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin3_2_GPIO_Port, Pin3_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin4_2_GPIO_Port, Pin4_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin5_2_GPIO_Port, Pin5_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin6_2_GPIO_Port, Pin6_2_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(Pin0_2_GPIO_Port, Pin0_2_Pin, SET);
			HAL_GPIO_WritePin(Pin1_2_GPIO_Port, Pin1_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin2_2_GPIO_Port, Pin2_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin3_2_GPIO_Port, Pin3_2_Pin, SET);
			HAL_GPIO_WritePin(Pin4_2_GPIO_Port, Pin4_2_Pin, SET);
			HAL_GPIO_WritePin(Pin5_2_GPIO_Port, Pin5_2_Pin, SET);
			HAL_GPIO_WritePin(Pin6_2_GPIO_Port, Pin6_2_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(Pin0_2_GPIO_Port, Pin0_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin1_2_GPIO_Port, Pin1_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin2_2_GPIO_Port, Pin2_2_Pin, SET);
			HAL_GPIO_WritePin(Pin3_2_GPIO_Port, Pin3_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin4_2_GPIO_Port, Pin4_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin5_2_GPIO_Port, Pin5_2_Pin, SET);
			HAL_GPIO_WritePin(Pin6_2_GPIO_Port, Pin6_2_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(Pin0_2_GPIO_Port, Pin0_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin1_2_GPIO_Port, Pin1_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin2_2_GPIO_Port, Pin2_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin3_2_GPIO_Port, Pin3_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin4_2_GPIO_Port, Pin4_2_Pin, SET);
			HAL_GPIO_WritePin(Pin5_2_GPIO_Port, Pin5_2_Pin, SET);
			HAL_GPIO_WritePin(Pin6_2_GPIO_Port, Pin6_2_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(Pin0_2_GPIO_Port, Pin0_2_Pin, SET);
			HAL_GPIO_WritePin(Pin1_2_GPIO_Port, Pin1_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin2_2_GPIO_Port, Pin2_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin3_2_GPIO_Port, Pin3_2_Pin, SET);
			HAL_GPIO_WritePin(Pin4_2_GPIO_Port, Pin4_2_Pin, SET);
			HAL_GPIO_WritePin(Pin5_2_GPIO_Port, Pin5_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin6_2_GPIO_Port, Pin6_2_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(Pin0_2_GPIO_Port, Pin0_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin1_2_GPIO_Port, Pin1_2_Pin, SET);
			HAL_GPIO_WritePin(Pin2_2_GPIO_Port, Pin2_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin3_2_GPIO_Port, Pin3_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin4_2_GPIO_Port, Pin4_2_Pin, SET);
			HAL_GPIO_WritePin(Pin5_2_GPIO_Port, Pin5_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin6_2_GPIO_Port, Pin6_2_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(Pin0_2_GPIO_Port, Pin0_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin1_2_GPIO_Port, Pin1_2_Pin, SET);
			HAL_GPIO_WritePin(Pin2_2_GPIO_Port, Pin2_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin3_2_GPIO_Port, Pin3_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin4_2_GPIO_Port, Pin4_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin5_2_GPIO_Port, Pin5_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin6_2_GPIO_Port, Pin6_2_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(Pin0_2_GPIO_Port, Pin0_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin1_2_GPIO_Port, Pin1_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin2_2_GPIO_Port, Pin2_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin3_2_GPIO_Port, Pin3_2_Pin, SET);
			HAL_GPIO_WritePin(Pin4_2_GPIO_Port, Pin4_2_Pin, SET);
			HAL_GPIO_WritePin(Pin5_2_GPIO_Port, Pin5_2_Pin, SET);
			HAL_GPIO_WritePin(Pin6_2_GPIO_Port, Pin6_2_Pin, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(Pin0_2_GPIO_Port, Pin0_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin1_2_GPIO_Port, Pin1_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin2_2_GPIO_Port, Pin2_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin3_2_GPIO_Port, Pin3_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin4_2_GPIO_Port, Pin4_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin5_2_GPIO_Port, Pin5_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin6_2_GPIO_Port, Pin6_2_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(Pin0_2_GPIO_Port, Pin0_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin1_2_GPIO_Port, Pin1_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin2_2_GPIO_Port, Pin2_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin3_2_GPIO_Port, Pin3_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin4_2_GPIO_Port, Pin4_2_Pin, SET);
			HAL_GPIO_WritePin(Pin5_2_GPIO_Port, Pin5_2_Pin, RESET);
			HAL_GPIO_WritePin(Pin6_2_GPIO_Port, Pin6_2_Pin, RESET);
			break;
		default:
			break;
	}
}

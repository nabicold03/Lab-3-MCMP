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
int led_buffer[4]={1, 2, 3, 4};
void update7SEG(int index, int led){
	switch(index){
		case 0:
			HAL_GPIO_WritePin(On_1_GPIO_Port, On_1_Pin, RESET);
			HAL_GPIO_WritePin(On_2_GPIO_Port, On_2_Pin, SET);
			HAL_GPIO_WritePin(On_3_GPIO_Port, On_3_Pin, SET);
			HAL_GPIO_WritePin(On_4_GPIO_Port, On_4_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(On_1_GPIO_Port, On_1_Pin, SET);
			HAL_GPIO_WritePin(On_2_GPIO_Port, On_2_Pin, RESET);
			HAL_GPIO_WritePin(On_3_GPIO_Port, On_3_Pin, SET);
			HAL_GPIO_WritePin(On_4_GPIO_Port, On_4_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(On_1_GPIO_Port, On_1_Pin, SET);
			HAL_GPIO_WritePin(On_2_GPIO_Port, On_2_Pin, SET);
			HAL_GPIO_WritePin(On_3_GPIO_Port, On_3_Pin, RESET);
			HAL_GPIO_WritePin(On_4_GPIO_Port, On_4_Pin, SET);
			break;
		case 3:
			HAL_GPIO_WritePin(On_1_GPIO_Port, On_1_Pin, SET);
			HAL_GPIO_WritePin(On_2_GPIO_Port, On_2_Pin, SET);
			HAL_GPIO_WritePin(On_3_GPIO_Port, On_3_Pin, SET);
			HAL_GPIO_WritePin(On_4_GPIO_Port, On_4_Pin, RESET);
			break;
		default:
			break;
	}
	if(led==1){
		display7seg1(led_buffer[index]);
	} else display7seg2(led_buffer[index]);
}
void updateClockBuffer(int secled1, int secled2){
	//minute
	if(secled1 < 10){
		led_buffer[0]=0;
	} else led_buffer[0]=secled1/10;
	led_buffer[1]=secled1%10;

	//second
	if(secled2 < 10){
		led_buffer[2]=0;
	} else led_buffer[2]=secled2/10;
	led_buffer[3]=secled2%10;
}

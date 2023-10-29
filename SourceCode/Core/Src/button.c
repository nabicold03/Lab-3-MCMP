/*
 * button.c
 *
 *  Created on: Oct 29, 2023
 *      Author: Admin
 */

#include"button.h"
#include"main.h"

int button1_flag=0;

int keyReg0=NORMAL_STATE;
int keyReg1=NORMAL_STATE;
int keyReg2=NORMAL_STATE;
int keyReg3=NORMAL_STATE;
int TimerForKeyPress=200;

void setflag(){
	button1_flag=1;
}

int isButton1Pressed(){
	if(button1_flag==1){
		button1_flag=0;
		return 1;
	}
	return 0;
}

void getKeyInput(){
	keyReg0=keyReg1;
	keyReg1=keyReg2;
	keyReg2=HAL_GPIO_ReadPin(Button_GPIO_Port, Button_Pin);
	if((keyReg0==keyReg1) && (keyReg1==keyReg2)){
		if(keyReg3 != keyReg2){
			keyReg3=keyReg2;
			if(keyReg2==PRESSED_STATE){
				setflag();
				TimerForKeyPress=200;
			}
		} else {
			TimerForKeyPress--;
			if(TimerForKeyPress<=0){
				keyReg3=NORMAL_STATE;
			}
		}
	}
}

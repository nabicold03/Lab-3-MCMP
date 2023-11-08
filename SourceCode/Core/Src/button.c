/*
 * button.c
 *
 *  Created on: Oct 29, 2023
 *      Author: Admin
 */

#include"button.h"
#include"main.h"

int button_flag[3]={0,0,0};

int keyReg0=NORMAL_STATE;
int keyReg1=NORMAL_STATE;
int keyReg2=NORMAL_STATE;
int keyReg3=NORMAL_STATE;
int TimerForKeyPress=200;

void setflag(int key){
	button_flag[key]=1;
}

int isButtonPressed(int key){
	if(button_flag[key]==1){
		button_flag[key]=0;
		return 1;
	}
	return 0;
}

void getKeyInput(int key){
	keyReg0=keyReg1;
	keyReg1=keyReg2;
	if(key==0){
		keyReg2=HAL_GPIO_ReadPin(Button_0_GPIO_Port, Button_0_Pin);
	} else if(key==1){
		keyReg2=HAL_GPIO_ReadPin(Button_1_GPIO_Port, Button_1_Pin);
	} else {
		keyReg2=HAL_GPIO_ReadPin(Button_2_GPIO_Port, Button_2_Pin);
	}
	if((keyReg0==keyReg1) && (keyReg1==keyReg2)){
		if(keyReg3 != keyReg2){
			keyReg3=keyReg2;
			if(keyReg2==PRESSED_STATE){
				setflag(key);
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

/*
 * button.c
 *
 *  Created on: Oct 29, 2023
 *      Author: Admin
 */

#include"button.h"
#include"main.h"
#include"global.h"

int button_flag[3]={0,0,0};

int keyReg0[3]={NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int keyReg1[3]={NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int keyReg2[3]={NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int keyReg3[3]={NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int TimerForKeyPress[3]={200,200,200};

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
	keyReg0[key]=keyReg1[key];
	keyReg1[key]=keyReg2[key];
	if(key==0){
		keyReg2[key]=HAL_GPIO_ReadPin(Button_0_GPIO_Port, Button_0_Pin);
	} else if(key==1){
		keyReg2[key]=HAL_GPIO_ReadPin(Button_1_GPIO_Port, Button_1_Pin);
	} else {
		keyReg2[key]=HAL_GPIO_ReadPin(Button_2_GPIO_Port, Button_2_Pin);
	}
	if((keyReg0[key]==keyReg1[key]) && (keyReg1[key]==keyReg2[key])){
		if(keyReg3[key] != keyReg2[key]){
			keyReg3[key]=keyReg2[key];
			if(keyReg2[key]==PRESSED_STATE){
				setflag(key);
				TimerForKeyPress[key]=200;
			} else {
				btn2hold=0;
				btn3hold=0;
			}
		} else {
			TimerForKeyPress[key]--;
			if(TimerForKeyPress[key]<=0){
				keyReg3[key]=NORMAL_STATE;
				if(key==1){
					btn2hold=1;
				} else if(key==2){
					btn3hold=1;
				}
			}
		}
	}
}

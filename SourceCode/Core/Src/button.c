/*
 * button.c
 *
 *  Created on: Oct 29, 2023
 *      Author: Admin
 */

#include"button.h"
#include"main.h"

//int button_flag[3]={0,0,0};
//
//int keyReg0[3]={NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
//int keyReg1[3]={NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
//int keyReg2[3]={NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
//int keyReg3[3]={NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
//int TimerForKeyPress=200;
//
//void setflag(int key){
//	button_flag[key]=1;
//}
//
//int isButtonPressed(int key){
//	if(button_flag[key]==1){
//		button_flag[key]=0;
//		return 1;
//	}
//	return 0;
//}
//
//void getKeyInput(int key){
//	keyReg0[key]=keyReg1[key];
//	keyReg1[key]=keyReg2[key];
//	if(key==0){
//		keyReg2[key]=HAL_GPIO_ReadPin(Button_0_GPIO_Port, Button_0_Pin);
//	} else if(key==1){
//		keyReg2[key]=HAL_GPIO_ReadPin(Button_1_GPIO_Port, Button_1_Pin);
//	} else {
//		keyReg2[key]=HAL_GPIO_ReadPin(Button_2_GPIO_Port, Button_2_Pin);
//	}
//	if((keyReg0[key]==keyReg1[key]) && (keyReg1[key]==keyReg2[key])){
//		if(keyReg3[key] != keyReg2[key]){
//			keyReg3[key]=keyReg2[key];
//			if(keyReg2[key]==PRESSED_STATE){
//				setflag(key);
//				TimerForKeyPress=200;
//			}
//		} else {
//			TimerForKeyPress--;
//			if(TimerForKeyPress<=0){
//				keyReg3[key]=NORMAL_STATE;
//			}
//		}
//	}
//}
int button_flag0=0;

int keyReg0_0=NORMAL_STATE;
int keyReg1_0=NORMAL_STATE;
int keyReg2_0=NORMAL_STATE;
int keyReg3_0=NORMAL_STATE;
int TimerForKeyPress0=200;

void setflag0(){
	button_flag0=1;
}

int isButtonPressed0(){
	if(button_flag0==1){
		button_flag0=0;
		return 1;
	}
	return 0;
}

void getKeyInput0(){
	keyReg0_0=keyReg1_0;
	keyReg1_0=keyReg2_0;
	keyReg2_0=HAL_GPIO_ReadPin(Button_0_GPIO_Port, Button_0_Pin);

	if((keyReg0_0==keyReg1_0) && (keyReg1_0==keyReg2_0)){
		if(keyReg3_0 != keyReg2_0){
			keyReg3_0=keyReg2_0;
			if(keyReg2_0==PRESSED_STATE){
				setflag0();
				TimerForKeyPress0=200;
			}
		} else {
			TimerForKeyPress0--;
			if(TimerForKeyPress0<=0){
				keyReg3_0=NORMAL_STATE;
			}
		}
	}
}

int button_flag1=0;

int keyReg0_1=NORMAL_STATE;
int keyReg1_1=NORMAL_STATE;
int keyReg2_1=NORMAL_STATE;
int keyReg3_1=NORMAL_STATE;
int TimerForKeyPress1=200;

void setflag1(){
	button_flag1=1;
}

int isButtonPressed1(){
	if(button_flag1==1){
		button_flag1=0;
		return 1;
	}
	return 0;
}

void getKeyInput1(){
	keyReg0_1=keyReg1_1;
	keyReg1_1=keyReg2_1;
	keyReg2_1=HAL_GPIO_ReadPin(Button_1_GPIO_Port, Button_1_Pin);

	if((keyReg0_1==keyReg1_1) && (keyReg1_1==keyReg2_1)){
		if(keyReg3_1 != keyReg2_1){
			keyReg3_1=keyReg2_1;
			if(keyReg2_1==PRESSED_STATE){
				setflag1();
				TimerForKeyPress1=200;
			}
		} else {
			TimerForKeyPress1--;
			if(TimerForKeyPress1<=0){
				keyReg3_1=NORMAL_STATE;
			}
		}
	}
}

int button_flag2=0;

int keyReg0_2=NORMAL_STATE;
int keyReg1_2=NORMAL_STATE;
int keyReg2_2=NORMAL_STATE;
int keyReg3_2=NORMAL_STATE;
int TimerForKeyPress2=200;

void setflag2(){
	button_flag2=1;
}

int isButtonPressed2(){
	if(button_flag2==1){
		button_flag2=0;
		return 1;
	}
	return 0;
}

void getKeyInput2(){
	keyReg0_2=keyReg1_2;
	keyReg1_2=keyReg2_2;
	keyReg2_2=HAL_GPIO_ReadPin(Button_2_GPIO_Port, Button_2_Pin);

	if((keyReg0_2==keyReg1_2) && (keyReg1_2==keyReg2_2)){
		if(keyReg3_2 != keyReg2_2){
			keyReg3_2=keyReg2_2;
			if(keyReg2_2==PRESSED_STATE){
				setflag2();
				TimerForKeyPress2=200;
			}
		} else {
			TimerForKeyPress2--;
			if(TimerForKeyPress2<=0){
				keyReg3_2=NORMAL_STATE;
			}
		}
	}
}

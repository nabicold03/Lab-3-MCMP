/*
 * button.c
 *
 *  Created on: Oct 29, 2023
 *      Author: Admin
 */

#include"button.h"
#include"main.h"
int keyReg0=NORMAL_STATE;
int keyReg1=NORMAL_STATE;
int keyReg2=NORMAL_STATE;
int keyReg3=NORMAL_STATE;
int TimerForKeyPress=200;
void getKeyInput(){
	keyReg0=keyReg1;
	keyReg1=keyReg2;
	keyReg2=HAL_GPIO_ReadPin(Button_GPIO_Port, Button_Pin);
	if((keyReg0==keyReg1) && (keyReg1==keyReg2)){
		if(keyReg3 != keyReg2){
			keyReg3=keyReg2;
			if(keyReg2==PRESSED_STATE){
				TimerForKeyPress=200;
			}
		} else {
			TimerForKeyPress--;
			if(TimerForKeyPress<=0){

			}
		}
	}
}

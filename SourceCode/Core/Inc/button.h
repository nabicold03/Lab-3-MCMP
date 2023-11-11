/*
 * button.h
 *
 *  Created on: Oct 29, 2023
 *      Author: Admin
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

int isButtonPressed0();
int isButtonPressed1();
int isButtonPressed2();

void getKeyInput0();
void getKeyInput1();
void getKeyInput2();

#endif /* INC_BUTTON_H_ */

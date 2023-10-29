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

int isButton1Pressed();

#endif /* INC_BUTTON_H_ */

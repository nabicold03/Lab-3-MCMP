/*
 * display_7seg.h
 *
 *  Created on: Oct 30, 2023
 *      Author: Admin
 */

#ifndef SRC_DISPLAY_7SEG_H_
#define SRC_DISPLAY_7SEG_H_
#include"main.h"

void display7seg(int number);
void update7seg(int index);
void updateClockBuffer(int secled1, int secled2);

#endif /* SRC_DISPLAY_7SEG_H_ */

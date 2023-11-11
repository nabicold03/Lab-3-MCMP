/*
 * global.h
 *
 *  Created on: Oct 29, 2023
 *      Author: Admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include"software_timer.h"
#include"button.h"
#include"main.h"

extern int btn2hold;
extern int btn3hold;
extern int status;
extern int led_buffer[4];
extern int Sevsegbuffer[3];

void updateSevsegbuffer(int key, int value);
int alteb(int a, int b);

#define MODE_1		1
#define Gr1andRe2	2
#define Ye1andRe2	3
#define Re1andGr2	4
#define Re1andYe2	5

#define MODE_2		20
#define MAN_RED		21
#define MODE_3		22
#define MAN_YELLOW	23
#define MODE_4		24
#define MAN_GREEN	25

#endif /* INC_GLOBAL_H_ */

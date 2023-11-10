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

extern int status;
extern int led_buffer[4];
extern int Sevsegbuffer[3];

#define INIT		1
#define Gr1andRe2	2
#define Ye1andRe2	3
#define Re1andGr2	4
#define Re1andYe2	5

#define MAN_RED		11
#define MAN_YELLOW	12
#define MAN_GREEN	13

#endif /* INC_GLOBAL_H_ */

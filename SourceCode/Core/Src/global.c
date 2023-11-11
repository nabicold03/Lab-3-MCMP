/*
 * global.c
 *
 *  Created on: Oct 29, 2023
 *      Author: Admin
 */

#include"global.h"
int status;
int Sevsegbuffer[3]={5,2,3};
void updateSevsegbuffer(int key, int value){
	Sevsegbuffer[key]=value;
}
int alteb(int a, int b){
	return (a<=b)?1:0;
}

/*
 * software_timer.c
 *
 *  Created on: Oct 5, 2023
 *      Author: Lenovo
 */

#include "software_timer.h"

int time1_flag = 0;

int time_counter = 0;
void setTime1(int duration) {
	time_counter = duration;
	time1_flag = 0;
}
void runTime() {
	if(time_counter>0) {
		time_counter--;
		if(time_counter<=0) {
			time1_flag=1;
		}
	}
}

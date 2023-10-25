/*
 * update7seg.c
 *
 *  Created on: Oct 25, 2023
 *      Author: Lenovo
 */

#include "update7seg.h"
#include "led7seg.h"
const int MAX_LED = 4;
int index_led = 0;
int led_buffer[4] = {5 , 2 , 3 , 4};
void update7SEG(int index ) {
	 switch (index) {
	 case 0:
		 display7SEG(led_buffer[index]);
	 break ;
	 case 1:
		 display7SEG(led_buffer[index]);
	 break ;
	 case 2:
		 display7SEG(led_buffer[index]);
	 break ;
	 case 3:
		 display7SEG(led_buffer[index]);
	 break ;
	 default :
	 break ;
 }
 }

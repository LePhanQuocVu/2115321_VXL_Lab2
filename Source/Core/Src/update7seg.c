/*
 * update7seg.c
 *
 *  Created on: Oct 16, 2023
 *      Author: LE_ovo
 */

#include "main.h"
#include"update7seg.h"
const int MAX_LED = 4;
int led_buffer[4] = {1 , 2 , 3 , 4};
int index_led = 0;
void update7SEG(int index ) {
	switch ( index ) {
			case 0:
				HAL_GPIO_WritePin(E_0_GPIO_Port, E_0_Pin, RESET);
				HAL_GPIO_WritePin(E_1_GPIO_Port, E_1_Pin, SET);
				HAL_GPIO_WritePin(E_2_GPIO_Port, E_2_Pin, SET);
				HAL_GPIO_WritePin(E_3_GPIO_Port, E_3_Pin, SET);
				display7SEG(led_buffer[index]);
				break;
			case 1:
				HAL_GPIO_WritePin(E_0_GPIO_Port, E_0_Pin, SET);
				HAL_GPIO_WritePin(E_1_GPIO_Port, E_1_Pin, RESET);
				HAL_GPIO_WritePin(E_2_GPIO_Port, E_2_Pin, SET);
				HAL_GPIO_WritePin(E_3_GPIO_Port, E_3_Pin, SET);
				display7SEG(led_buffer[index]);
				break;
			case 2:
				HAL_GPIO_WritePin(E_0_GPIO_Port, E_0_Pin, SET);
				HAL_GPIO_WritePin(E_1_GPIO_Port, E_1_Pin, SET);
				HAL_GPIO_WritePin(E_2_GPIO_Port, E_2_Pin, RESET);
				HAL_GPIO_WritePin(E_3_GPIO_Port, E_3_Pin, SET);
				display7SEG(led_buffer[index]);
				break;
			case 3:
				HAL_GPIO_WritePin(E_0_GPIO_Port, E_0_Pin, SET);
				HAL_GPIO_WritePin(E_1_GPIO_Port, E_1_Pin, SET);
				HAL_GPIO_WritePin(E_2_GPIO_Port, E_2_Pin, SET);
				HAL_GPIO_WritePin(E_3_GPIO_Port, E_3_Pin, RESET);
				display7SEG(led_buffer[index]);
				break;
			default :
				break ;
	 }
}

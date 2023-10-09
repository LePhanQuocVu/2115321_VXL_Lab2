/*
 * led7seg.c
 *
 *  Created on: Oct 9, 2023
 *      Author: Lenovo
 */

#include "led7seg.h"
#include "main.h"
void display7SEG(int status) {
	  switch(status) {
	  case 0:
		  HAL_GPIO_WritePin(Led7_0_GPIO_Port, Led7_0_Pin, RESET);
		  HAL_GPIO_WritePin(Led7_1_GPIO_Port, Led7_1_Pin, RESET);
		  HAL_GPIO_WritePin(Led7_2_GPIO_Port, Led7_2_Pin, RESET);
		  HAL_GPIO_WritePin(Led7_3_GPIO_Port, Led7_3_Pin, RESET);
		  HAL_GPIO_WritePin(Led7_4_GPIO_Port, Led7_4_Pin, RESET);
		  HAL_GPIO_WritePin(Led7_5_GPIO_Port, Led7_5_Pin, RESET);
		  HAL_GPIO_WritePin(Led7_6_GPIO_Port, Led7_6_Pin, SET);
		  break;
	  case 1:
		  HAL_GPIO_WritePin(Led7_0_GPIO_Port, Led7_0_Pin, SET);
		  HAL_GPIO_WritePin(Led7_1_GPIO_Port, Led7_1_Pin, RESET);
		  HAL_GPIO_WritePin(Led7_2_GPIO_Port, Led7_2_Pin, RESET);
		  HAL_GPIO_WritePin(Led7_3_GPIO_Port, Led7_3_Pin, SET);
		  HAL_GPIO_WritePin(Led7_4_GPIO_Port, Led7_4_Pin, SET);
		  HAL_GPIO_WritePin(Led7_5_GPIO_Port, Led7_5_Pin, SET);
		  HAL_GPIO_WritePin(Led7_6_GPIO_Port, Led7_6_Pin, SET);

		  break;
	  case 2:
		 HAL_GPIO_WritePin(Led7_0_GPIO_Port, Led7_0_Pin, RESET);
		 HAL_GPIO_WritePin(Led7_1_GPIO_Port, Led7_1_Pin, RESET);
		 HAL_GPIO_WritePin(Led7_2_GPIO_Port, Led7_2_Pin, SET);
		 HAL_GPIO_WritePin(Led7_3_GPIO_Port, Led7_3_Pin, RESET);
		 HAL_GPIO_WritePin(Led7_4_GPIO_Port, Led7_4_Pin, RESET);
		 HAL_GPIO_WritePin(Led7_5_GPIO_Port, Led7_5_Pin, SET);
		 HAL_GPIO_WritePin(Led7_6_GPIO_Port, Led7_6_Pin, RESET);

		  break;
	  case 3:
			 HAL_GPIO_WritePin(Led7_0_GPIO_Port, Led7_0_Pin, RESET);
			 HAL_GPIO_WritePin(Led7_1_GPIO_Port, Led7_1_Pin, RESET);
			 HAL_GPIO_WritePin(Led7_2_GPIO_Port, Led7_2_Pin, RESET);
			 HAL_GPIO_WritePin(Led7_3_GPIO_Port, Led7_3_Pin, RESET);
			 HAL_GPIO_WritePin(Led7_4_GPIO_Port, Led7_4_Pin, SET);
			 HAL_GPIO_WritePin(Led7_5_GPIO_Port, Led7_5_Pin, SET);
			 HAL_GPIO_WritePin(Led7_6_GPIO_Port, Led7_6_Pin, RESET);
		  break;
	  case 4:
			 HAL_GPIO_WritePin(Led7_0_GPIO_Port, Led7_0_Pin, SET);
			 HAL_GPIO_WritePin(Led7_1_GPIO_Port, Led7_1_Pin, RESET);
			 HAL_GPIO_WritePin(Led7_2_GPIO_Port, Led7_2_Pin, RESET);
			 HAL_GPIO_WritePin(Led7_3_GPIO_Port, Led7_3_Pin, SET);
			 HAL_GPIO_WritePin(Led7_4_GPIO_Port, Led7_4_Pin, SET);
			 HAL_GPIO_WritePin(Led7_5_GPIO_Port, Led7_5_Pin, RESET);
			 HAL_GPIO_WritePin(Led7_6_GPIO_Port, Led7_6_Pin, RESET);
		  break;
	  case 5:
			 HAL_GPIO_WritePin(Led7_0_GPIO_Port, Led7_0_Pin, RESET);
			 HAL_GPIO_WritePin(Led7_1_GPIO_Port, Led7_1_Pin, SET);
			 HAL_GPIO_WritePin(Led7_2_GPIO_Port, Led7_2_Pin, RESET);
			 HAL_GPIO_WritePin(Led7_3_GPIO_Port, Led7_3_Pin, RESET);
			 HAL_GPIO_WritePin(Led7_4_GPIO_Port, Led7_4_Pin, SET);
			 HAL_GPIO_WritePin(Led7_5_GPIO_Port, Led7_5_Pin, RESET);
			 HAL_GPIO_WritePin(Led7_6_GPIO_Port, Led7_6_Pin, RESET);
	  	  break;
	  case 6:
			 HAL_GPIO_WritePin(Led7_0_GPIO_Port, Led7_0_Pin, RESET);
			 HAL_GPIO_WritePin(Led7_1_GPIO_Port, Led7_1_Pin, SET);
			 HAL_GPIO_WritePin(Led7_2_GPIO_Port, Led7_2_Pin, RESET);
			 HAL_GPIO_WritePin(Led7_3_GPIO_Port, Led7_3_Pin, RESET);
			 HAL_GPIO_WritePin(Led7_4_GPIO_Port, Led7_4_Pin, RESET);
			 HAL_GPIO_WritePin(Led7_5_GPIO_Port, Led7_5_Pin, RESET);
			 HAL_GPIO_WritePin(Led7_6_GPIO_Port, Led7_6_Pin, RESET);
		    break;
	  case 7:
		  HAL_GPIO_WritePin(Led7_0_GPIO_Port, Led7_0_Pin, RESET);
		  HAL_GPIO_WritePin(Led7_1_GPIO_Port, Led7_1_Pin, RESET);
		  HAL_GPIO_WritePin(Led7_2_GPIO_Port, Led7_2_Pin, RESET);
		  HAL_GPIO_WritePin(Led7_3_GPIO_Port, Led7_3_Pin, SET);
		  HAL_GPIO_WritePin(Led7_4_GPIO_Port, Led7_4_Pin, SET);
		  HAL_GPIO_WritePin(Led7_5_GPIO_Port, Led7_5_Pin, SET);
		  HAL_GPIO_WritePin(Led7_6_GPIO_Port, Led7_6_Pin, SET);
	  	  break;
	  case 8:
		  HAL_GPIO_WritePin(Led7_0_GPIO_Port, Led7_0_Pin, RESET);
		  HAL_GPIO_WritePin(Led7_1_GPIO_Port, Led7_1_Pin, RESET);
		  HAL_GPIO_WritePin(Led7_2_GPIO_Port, Led7_2_Pin, RESET);
		  HAL_GPIO_WritePin(Led7_3_GPIO_Port, Led7_3_Pin, RESET);
		  HAL_GPIO_WritePin(Led7_4_GPIO_Port, Led7_4_Pin, RESET);
		  HAL_GPIO_WritePin(Led7_5_GPIO_Port, Led7_5_Pin, RESET);
		  HAL_GPIO_WritePin(Led7_6_GPIO_Port, Led7_6_Pin, RESET);
	     break;
	  case 9:
		  HAL_GPIO_WritePin(Led7_0_GPIO_Port, Led7_0_Pin, RESET);
		  HAL_GPIO_WritePin(Led7_1_GPIO_Port, Led7_1_Pin, RESET);
		  HAL_GPIO_WritePin(Led7_2_GPIO_Port, Led7_2_Pin, RESET);
		  HAL_GPIO_WritePin(Led7_3_GPIO_Port, Led7_3_Pin, RESET);
		  HAL_GPIO_WritePin(Led7_4_GPIO_Port, Led7_4_Pin, SET);
		  HAL_GPIO_WritePin(Led7_5_GPIO_Port, Led7_5_Pin, RESET);
		  HAL_GPIO_WritePin(Led7_6_GPIO_Port, Led7_6_Pin, RESET);
		  break;
	  default:
	    break;
	  }
 }

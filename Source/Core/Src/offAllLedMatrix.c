/*
 * offAllLedMatrix.c
 *
 *  Created on: Oct 31, 2023
 *      Author: Lenovo
 */

#ifndef SRC_OFFALLLEDMATRIX_C_
#define SRC_OFFALLLEDMATRIX_C_

#include "offAllLedMatrix.h"

void offAllMaxtrix(){
 HAL_GPIO_WritePin(R0_GPIO_Port, R0_Pin, SET);
 HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, SET);
 HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, SET);
 HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, SET);
 HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, SET);
 HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, SET);
 HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, SET);
 HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, SET);

 //col
 HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
 HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
 HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
 HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
 HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, SET);
 HAL_GPIO_WritePin(EN5_GPIO_Port, EN5_Pin, SET);
 HAL_GPIO_WritePin(EN6_GPIO_Port, EN6_Pin, SET);
 HAL_GPIO_WritePin(EN7_GPIO_Port, EN7_Pin, SET);
}

void onAllRow() {
 HAL_GPIO_WritePin(R0_GPIO_Port, R0_Pin, RESET);
 HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, RESET);
 HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, RESET);
 HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, RESET);
 HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, RESET);
 HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, RESET);
 HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, RESET);
 HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, RESET);
}

void onAllCol() {
 HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
 HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
 HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
 HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
 HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, RESET);
 HAL_GPIO_WritePin(EN5_GPIO_Port, EN5_Pin, RESET);
 HAL_GPIO_WritePin(EN6_GPIO_Port, EN6_Pin, RESET);
 HAL_GPIO_WritePin(EN7_GPIO_Port, EN7_Pin, RESET);
}

void onRow(int index){
	switch(index){
	case 0:
		 HAL_GPIO_WritePin(R0_GPIO_Port, R0_Pin, RESET);
		break;
	case 1:
		 HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, RESET);
		break;
	case 2:
		 HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, RESET);
		break;
	case 3:
		 HAL_GPIO_WritePin(R3_GPIO_Port, R3_Pin, RESET);
		break;
	case 4:
		 HAL_GPIO_WritePin(R4_GPIO_Port, R4_Pin, RESET);
		break;
	case 5:
		 HAL_GPIO_WritePin(R5_GPIO_Port, R5_Pin, RESET);
		break;
	case 6:
		 HAL_GPIO_WritePin(R6_GPIO_Port, R6_Pin, RESET);
		break;
	case 7:
		 HAL_GPIO_WritePin(R7_GPIO_Port, R7_Pin, RESET);
		break;
	default:
		offAllMaxtrix();
		break;
	}
}

void onCol(int index){
	switch(index){
		case 0:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(EN5_GPIO_Port, EN5_Pin, RESET);
			break;
		case 6:
			 HAL_GPIO_WritePin(EN6_GPIO_Port, EN6_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(EN7_GPIO_Port, EN7_Pin, RESET);
			break;
		default:
			offAllMaxtrix();
			break;

	}
}

#endif /* SRC_OFFALLLEDMATRIX_C_ */

/*
 * steper.c
 *
 *  Created on: Nov 1, 2017
 *      Author: Nicolas
 */
#include "steper.h"

volatile static int Steps = 0; 
const int Paso [ 8 ][ 4 ] =
   {  {1, 0, 0, 0},
      {1, 1, 0, 0},
      {0, 1, 0, 0},
      {0, 1, 1, 0},
      {0, 0, 1, 0},
      {0, 0, 1, 1},
      {0, 0, 0, 1},
      {1, 0, 0, 1}
   };

void stepper(int dir){
	PTAD_PTAD0 = Paso[Steps][0];
	PTAD_PTAD1 = Paso[Steps][1];
	PTAD_PTAD2 = Paso[Steps][2];
	PTAD_PTAD3 = Paso[Steps][3];
	if(dir == 0x8000){
		Steps++;
		if(Steps>=NUM_STEP)Steps=0;
	}
	else{
		Steps--;
		if(Steps < 0)Steps = NUM_STEP-1;
	}
	
	
}


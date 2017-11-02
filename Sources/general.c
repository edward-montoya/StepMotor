/*
 * general.c
 *
 *  Created on: Oct 19, 2017
 *      Author: Nicolas
 */

#include "general.h"

void MCG_Init(void) {
	MCGC2 = MCGC2_RANGE_MASK | MCGC2_HGO_MASK | MCGC2_EREFS_MASK | MCGC2_ERCLKEN_MASK;                                      
	while(MCGSC_OSCINIT != 1){};
	MCGC1 = MCGC1_CLKS1_MASK | MCGC1_RDIV_MASK;
	while (MCGSC_IREFST != 0){};
	while (MCGSC_CLKST != 0b10){};
	MCGC2 |= MCGC2_LP_MASK;  
	MCGC1_RDIV = 0b011;
	MCGC3 = MCGC3_PLLS_MASK | MCGC3_VDIV2_MASK;                                      
	while (MCGSC_PLLST != 1){};	
	MCGC2_LP = 0;                                 
	while (MCGSC_LOCK == 0){};                  
	MCGC1_CLKS = 0b00;
	while(MCGSC_CLKST != 0b11){};	
}

void Port_Init(void)
{
	PTADD=0xFF;//OUT FOR LEDS
	PTADS = 0xFF;
	PTAD=0x00;	
}

void msDelay(word ms){
	unsigned int i;
	unsigned int j;
	for(j=0;j < ms;j++){
		for(i=0;i < MSMODTIMER;i++){
			
		}
	}
}

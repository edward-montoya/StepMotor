/*
 * events.c
 *
 *  Created on: Nov 1, 2017
 *      Author: Nicolas
 */

#include "events.h"

#pragma DATA_SEG __SHORT_SEG _DATA_ZEROPAGE
volatile STR_FLAGS _INT_EVENTS = {0};
volatile unsigned int infoQt = 0;
int dataReady = 0;
volatile unsigned long turns = 0;
volatile unsigned int dir = 0;
#pragma DATA_SEG DEFAULT

volatile unsigned long temp =0;
volatile int i = 0;


void processEvents(void){
	if(EVENT_SCI == 1){
			  EVENT_SCI = 0;
			  dataReady++;
		  		if(dataReady == 1){
		  			infoQt = ReciveData;
		  			infoQt = infoQt << 8;
		  		}
		  		else if(dataReady == 2){
		  			infoQt = infoQt | ReciveData;
		  		}
	}
	if(dataReady == 2){
		dataReady = 0;
		if((infoQt & ACK_MASK) == ACK_MASK){
			dir = infoQt & DIR_MASK;
			temp = (infoQt & DATA_MASK) >> 6;
			turns = ((temp * ONE_TURN)/360);
			for(i = 0; i < turns;i++){
				stepper(dir);
				msDelay(5);
			}
			PTAD = 0;
			SCI_PutMsg("OK");
		}
		
	}
}

/*
 * sci.c
 *
 *  Created on: Oct 19, 2017
 *      Author: Nicolas
 */

#include "sci.h"

volatile unsigned int Flag_SCI = 0;

interrupt 23 void SCIRecive_ISR(void){
	SCI2S1;
	ReciveData = SCI2D;
	Flag_SCI = 1;		
}

void SCI_Init(void){
	// Configuration normal mode, enable clock in wait mode, 8 bits mode, not parity
	SCI2C1 = 0x00;
	// Activate receiver, transmitter and interrupts
	SCI2C2 = SCI2C2_RIE_MASK | SCI2C2_TE_MASK | SCI2C2_RE_MASK;
	SCI2C3 = 0x00;
	SCI2BDH = 0x00;
	// Configuration the baud rate module for a 8MHz clock.
	SCI2BDL = 52;
	// Block possible interrupt
	SCI2S1;
	ReciveData = SCI2D;
}

void SCI_PutChar(byte Data) {
  while(SCI2S1_TDRE == 0);
  SCI2D = Data;
}

byte SCI_GetChar(void) {
  while(SCI2S1_RDRF == 0);
  return SCI2D;
}

void SCI_PutMsg(const byte * Data) {
  while(*Data != '\0') {
	SCI_PutChar(*Data++);
  }
}

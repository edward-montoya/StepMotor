/*
 * events.h
 *
 *  Created on: Nov 1, 2017
 *      Author: Nicolas
 */

#ifndef EVENTS_H_
#define EVENTS_H_

#include "sci.h"
#include "general.h"
#include "steper.h"

typedef union
{
  unsigned char Byte;
  struct 
  {
    unsigned char flag0   :1;
    unsigned char flag1   :1;
    unsigned char flag2   :1;
    unsigned char flag3   :1;
    unsigned char flag4   :1;
    unsigned char flag5   :1;
    unsigned char flag6   :1;
    unsigned char flag7   :1;
  }Bits; 
}STR_FLAGS;


// Variables for handling events.
#pragma DATA_SEG __SHORT_SEG _DATA_ZEROPAGE
extern volatile STR_FLAGS _INT_EVENTS;
#pragma DATA_SEG DEFAULT

#define INT_EVENTS _INT_EVENTS.Byte
#define EVENT_SCI _INT_EVENTS.Bits.flag0

void processEvents(void);

#endif /* EVENTS_H_ */

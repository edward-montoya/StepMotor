/*
 * general.h
 *
 *  Created on: Oct 19, 2017
 *      Author: Nicolas
 */

#ifndef GENERAL_H_
#define GENERAL_H_
#include "derivative.h"

/* My data model define 
 * -------------------------------------------------------------------------------------------------------------------
 * -------------------------------------------------------------------------------------------------------------------
 * - SEN - DATA8 - DATA7 - DATA6 - DATA5 - DATA4 - DATA3 - DATA2 - DATA1 - DATA0 - CTR1 - -- - -- - -- - CTR1 - CTR0 -
 * -------------------------------------------------------------------------------------------------------------------
 * -------------------------------------------------------------------------------------------------------------------
 */

#define MSMODTIMER 360
#define DATA_MASK 0x7FC0
#define DIR_MASK 0x8000
#define ACK_MASK 0x0023


void MCG_Init(void);
void Port_Init(void);
void msDelay(word);


#endif /* GENERAL_H_ */

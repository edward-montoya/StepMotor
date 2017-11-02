/*
 * sci.h
 *
 *  Created on: Oct 19, 2017
 *      Author: Nicolas
 */

#ifndef SCI_H_
#define SCI_H_

#include "derivative.h"
#include "events.h"

extern char ReciveData;
extern volatile unsigned int Flag_SCI;
void SCI_Init(void);

#endif /* SCI_H_ */

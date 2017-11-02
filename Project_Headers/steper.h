/*
 * steper.h
 *
 *  Created on: Nov 1, 2017
 *      Author: Nicolas
 */

#ifndef STEPER_H_
#define STEPER_H_
#include "derivative.h"


#define ONE_TURN 4076
#define NUM_STEP 8

extern volatile unsigned int Flag_SCI;

void stepper(int);



#endif /* STEPER_H_ */

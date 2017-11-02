#include <hidef.h> /* for EnableInterrupts macro */
#include "derivative.h" /* include peripheral declarations */
#include "sci.h"
#include "general.h"
#include "events.h"


void main(void) {
  
  /* include your code here */
  	SOPT1_COPT = 0;
    Port_Init();
    SCI_Init();
    EnableInterrupts;
    

  for(;;) {
	  if(INT_EVENTS == 0)
		  __asm WAIT
	  processEvents();
  }
}

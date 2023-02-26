/************************************************************************/
/*                          Timer Driver                                */
/************************************************************************/

#ifndef TIMER_H_
#define TIMER_H_

/************************************************************************/
/*                          Library Imports                             */
/************************************************************************/
#include <avr/io.h>
#include <avr/interrupt.h>

/************************************************************************/
/*                          Timer Functions                             */
/************************************************************************/

/************************************************************************/
/* Function Description : Initialize The Timer0 Interrupt in CTC MODE   */
/* Function Arguments   : None                                          */
/* Function Returns     : void                                          */
/************************************************************************/
void Timer0_CTC_vInit_Interrupt(void);

#endif /* TIMER_H_ */
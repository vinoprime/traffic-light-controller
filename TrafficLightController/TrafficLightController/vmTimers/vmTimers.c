/*
* vmTimers.c
*
* Created: 3/26/2017 06:27:30
*  Author: VinMacro
*/

#include "vmTimers.h"

// initialize timer, interrupt and variable
void InitTimer0(void)
{
	
	// initialize counter
	TCNT0 = 0;
	// set up timer with prescaler = 1024
	TIMER0_OFF;
	// enable overflow interrupt
	TIMSK0 |= (1 << TOIE0);
}

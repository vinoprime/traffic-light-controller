/*
 * vmTimers.h
 *
 * Created: 3/26/2017 06:27:18
 *  Author: VinMacro
 */ 


#ifndef VMTIMERS_H_
#define VMTIMERS_H_

#include "../UPS_Display-model3.h"

#define TIMER0_OFF	TCCR0B |= (0 << CS02) |(0 << CS01)|(0 << CS00);
#define TIMER0_ON	TCCR0B |= (1 << CS02) |(0 << CS01)|(1 << CS00); //timer0 with prescaler = 1024


void InitTimer0(void);



#endif /* VMTIMERS_H_ */
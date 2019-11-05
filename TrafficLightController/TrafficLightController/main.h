/*
* main.h
*
* Created: 05-Nov-19 08:37:21
*  Author: Vinoth Ragavan
*/


#ifndef MAIN_H_
#define MAIN_H_

#define F_CPU 8000000L // run CPU at 8 MHz
//#define F_CPU 12000000L // run CPU at 12 MHz

#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/eeprom.h>
#include <avr/cpufunc.h>
#include <util/delay.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <inttypes.h>
#include <avr/pgmspace.h>
#include <stdio.h>


#define I2C_OFF				TWCR &= ~(1<<TWEN)
#define COMPARATOR_OFF		ACSR |=1<<ACD|0<<ACIE
#define SPI_OFF				SPCR |=0<<SPE|0<<SPIE


#define TRUE	1
#define FALSE	0
#define OUTPUT	1
#define INPUT	0

#define A_RED_LED_ON			PORTD |=(1<<PORTD0)
#define A_RED_LED_OFF			PORTD &=~(1<<PORTD0)
#define A_YELLOW_LED_ON			PORTD |=(1<<PORTD1)
#define A_YELLOW_LED_OFF		PORTD &=~(1<<PORTD1)
#define A_GREEN_LED_ON			PORTD |=(1<<PORTD2)
#define A_GREEN_LED_OFF			PORTD &=~(1<<PORTD2)



#define B_RED_LED_ON			PORTD |=(1<<PORTD3)
#define B_RED_LED_OFF			PORTD &=~(1<<PORTD3)
#define B_YELLOW_LED_ON			PORTD |=(1<<PORTD4)
#define B_YELLOW_LED_OFF		PORTD &=~(1<<PORTD4)
#define B_GREEN_LED_ON			PORTD |=(1<<PORTD5)
#define B_GREEN_LED_OFF			PORTD &=~(1<<PORTD5)



#define C_RED_LED_ON			PORTD |=(1<<PORTD6)
#define C_RED_LED_OFF			PORTD &=~(1<<PORTD6)
#define C_YELLOW_LED_ON			PORTD |=(1<<PORTD7)
#define C_YELLOW_LED_OFF		PORTD &=~(1<<PORTD7)
#define C_GREEN_LED_ON			PORTB |=(1<<PORTD0)
#define C_GREEN_LED_OFF			PORTB &=~(1<<PORTD0)



#define D_RED_LED_ON			PORTB |=(1<<PORTB1)
#define D_RED_LED_OFF			PORTB &=~(1<<PORTB1)
#define D_YELLOW_LED_ON			PORTB |=(1<<PORTB2)
#define D_YELLOW_LED_OFF		PORTB &=~(1<<PORTB2)
#define D_GREEN_LED_ON			PORTB |=(1<<PORTB3)
#define D_GREEN_LED_OFF			PORTB &=~(1<<PORTB3)


#define KEEP_LEFT_GREEN_LED_ON			PORTB |=(1<<PORTB4)
#define KEEP_LEFT_GREEN_LED_OFF			PORTB &=~(1<<PORTB4)






#endif /* MAIN_H_ */
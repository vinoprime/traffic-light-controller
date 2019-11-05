/*
* TrafficLightController.c
*
* Created: 05-Nov-19 08:35:34
* Author : Vinoth Ragavan
*/

#include "main.h"

void atmega8AInit()
{
	_delay_ms(100);
	/* Define pull-ups and set outputs high *//* Define directions for port pins */
	PORTB=0;
	_NOP();
	DDRB |= (OUTPUT<<DDB5)|(OUTPUT<<DDB4)|(OUTPUT<<DDB3)|(OUTPUT<<DDB2)|(OUTPUT<<DDB1)|(OUTPUT<<DDB0);
	_NOP();
	PORTC = 0;
	_NOP();
	DDRC |= (INPUT<<DDC5)|(INPUT<<DDC4)|(INPUT<<DDC3)|(INPUT<<DDC2)|(INPUT<<DDC1)|(INPUT<<DDC0);
	_NOP();
	PORTD = 0;
	_NOP();
	DDRD |= (OUTPUT<<DDD7)|(OUTPUT<<DDD6)|(OUTPUT<<DDD5)|(OUTPUT<<DDD4)|(OUTPUT<<DDD3)|(OUTPUT<<DDD2);
	DDRD |= (OUTPUT<<DDD1)|(OUTPUT<<DDD0);
	/* Insert nop for synchronization*/
	_delay_ms(50);
}


void goA(){
	
	B_RED_LED_ON;
	B_YELLOW_LED_OFF;
	B_GREEN_LED_OFF;
	
	C_RED_LED_ON;
	C_YELLOW_LED_OFF;
	C_GREEN_LED_OFF;
	
	D_RED_LED_ON;
	D_YELLOW_LED_OFF;
	D_GREEN_LED_OFF;
	
	A_RED_LED_OFF;
	A_YELLOW_LED_OFF;
	A_GREEN_LED_ON;
	
}


void goB(){
	
	A_RED_LED_OFF;
	A_YELLOW_LED_OFF;
	A_GREEN_LED_ON;
	
	C_RED_LED_ON;
	C_YELLOW_LED_OFF;
	C_GREEN_LED_OFF;
	
	D_RED_LED_ON;
	D_YELLOW_LED_OFF;
	D_GREEN_LED_OFF;
	
	B_RED_LED_ON;
	B_YELLOW_LED_OFF;
	B_GREEN_LED_OFF;
	
}



void goC(){
	
	A_RED_LED_OFF;
	A_YELLOW_LED_OFF;
	A_GREEN_LED_ON;
	
	B_RED_LED_ON;
	B_YELLOW_LED_OFF;
	B_GREEN_LED_OFF;

	
	D_RED_LED_ON;
	D_YELLOW_LED_OFF;
	D_GREEN_LED_OFF;
		
	C_RED_LED_ON;
	C_YELLOW_LED_OFF;
	C_GREEN_LED_OFF;
	
}



void goD(){
	
	A_RED_LED_OFF;
	A_YELLOW_LED_OFF;
	A_GREEN_LED_ON;
	
	B_RED_LED_ON;
	B_YELLOW_LED_OFF;
	B_GREEN_LED_OFF;
	
	C_RED_LED_ON;
	C_YELLOW_LED_OFF;
	C_GREEN_LED_OFF;
	
	D_RED_LED_ON;
	D_YELLOW_LED_OFF;
	D_GREEN_LED_OFF;
	
}

int main(void)
{
	_delay_ms(1);
	atmega8AInit();
	_delay_ms(200);
	
	
	
	A_RED_LED_OFF;
	A_YELLOW_LED_OFF;
	A_GREEN_LED_OFF;
	
	B_RED_LED_OFF;
	B_YELLOW_LED_OFF;
	B_GREEN_LED_OFF;
	
	C_RED_LED_OFF;
	C_YELLOW_LED_OFF;
	C_GREEN_LED_OFF;
	
	D_RED_LED_OFF;
	D_YELLOW_LED_OFF;
	D_GREEN_LED_OFF;
	
	KEEP_LEFT_GREEN_LED_OFF;
	
	while (1)
	{
		
		
		
	}
}


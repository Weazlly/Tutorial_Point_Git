/*
 * LED_flash.c
 *
 * Created: 22.08.2021 18:39:19
 * Author : Waldemar
 */ 

#include <avr/io.h>
#include <avr/delay.h>



int main(void)
{
	DDRC = (1<<PC7);
    /* Replace with your application code */
    while (1) 
    {
		PORTC = (1<<PC7);
		_delay_ms(500);
		PORTC &= ~(1<<PC7);
		_delay_ms(500);
    }
}


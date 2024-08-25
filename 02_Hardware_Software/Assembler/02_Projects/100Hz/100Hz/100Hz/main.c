/*
 * 100Hz.c
 *
 * Created: 28.09.2021 14:30:07
 * Author : Waldemar
 */ 

#define F_CPU 8000000L
#include <avr/io.h>


int main(void)
{
    // I/O definieren
	DDRB = 0xFF;
	
	// Timer einstellen
	TCCR0 |= (1<<WGM01)|(1<<COM00)|(1<<CS00)|(1<<CS02);
	TCNT0 |= 156;	
    while (1) 
    {
		
    }
}


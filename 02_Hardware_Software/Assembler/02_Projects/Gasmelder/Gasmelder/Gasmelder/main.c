/*
 * Gasmelder.c
 *
 * Created: 26.10.2021 14:47:45
 * Author : Waldemar
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/delay.h>

int flag = 0x00;

ISR (INT0_vect) //CO Kohlenstoff
{
	flag= 0x01;
}

ISR (INT1_vect) //Cl Chlor
{
	flag= 0x02;
}

ISR (INT2_vect) //Phosgen
{
	flag= 0x03;
}



int main(void)
{
	//Register Definieren
	DDRB = 0x00; //INT 2 ->Eingange
	DDRD = 0x00; //INT 0 und INT1 ->Eingange
	
	DDRC = (1<<PC7); //Melder ->Ausgang
	
	//Interrupt Einstellung
	
	MCUCR |= (1<<ISC00) | (1<<ISC10) | (1<<ISC11)| (1<<ISC01); //Flankenwechsel
	MCUCSR|= (1<<ISC2); //Steigende Flanke
	GICR|= (1<<INT0) | (1<<INT1) | (1<<INT2); //Interrupt Freigabe für Ext.Interrupt
	
	PORTC = 0x00;
	PORTA = 0x00;
	PORTB = 0x00;
   
    while (1) 
    {
		switch(flag)
		{
			case 0: //Kohlenstoff Melder
				PORTC = (1<<PC7);
			break;
			
			case 1: //Chlor Melder
				PORTC ^= (1<<PC7);
				_delay_ms(200);
			break;
			
			case 2: //Phosgen
				PORTC ^= (1<<PC7);
				_delay_ms(200);
			break;	
		}	
		if (PC5 == 0)
		{
			PORTC == 0x00;
			flag = 0x00;
		}
    }
}


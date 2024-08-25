/*
 * Uebung_Asembler_Atmega8.asm
 *
 *  Created: 29.06.2017 13:57:46
 *   Author: waldemar.tschernow
 */ 

 .include "m8def.inc"
 .def rLED = R20
 
 
  Start:	

	 ldi r17, 0x00           //Startwert vorgeben DEZ 0
	 out TCNT2, r17

  	 ldi r17, 0b00000111      //Konfiguration von Timer2: Normal-Mode Prescaler auf clk/8
	 out TCCR2, r17
	 rjmp LEDon              


	
  Ablauf1:
     ldi r17, 0x40
	 out TIFR, r17	

	 
  LEDon:
	 ldi rLED, 0x01		     //Register 20 beschreiben, DEZ 1
	 out DDRB, rLED		     //Data Direction Register mit dem wert von Register 20 beschreiben
	 out PORTB, rLED 	     //Data Register mit dem wert von Register 20 beschreiben
	 in r17, TIFR            //Aktueller Stand von Overflow Flag in Register 18 schreiben
     sbrs r17, 6			 //Überspringe den nächsten Befehl, wenn Bit 6 von Register 18 gesetzt ist
	 rjmp LEDon

  

  Ablauf2:
     ldi r17, 0x40
	 out TIFR, r17
	 

  LEDoff:
	 clr rLED
	 out DDRB, rLED
	 out PORTB, rLED
	 in r17, TIFR
	 sbrs r17, 6
	 rjmp LEDoff
	 

	 
  Zuruck:
     rjmp Ablauf1 
#include <iostream>

using namespace std;

/*
Arithmetische Operatoren

+  addieren
-  subtrahieren
*  multiplizieren
/  dividieren
%  modulo
++ inkrementieren
-- dividieren


Rationale Operatoren

==  Prüfe ob, Wert1 gleich Wert2 ist -> ist es wahr => true
!=  Prüfe ob, Wert1 NICHT gleich Wert2 ist -> ist es wahr => true
>   Prüfe ob, Wert1 größer Wert2 ist -> ist es wahr => true
<   Prüfe ob, Wert1 kleiner Wert2 ist -> ist es wahr => true
>=  Prüfe ob, Wert1 größer gleich Wert2 ist -> ist es wahr => true
<=  Prüfe ob, Wert1 kleiner gleich Wert2 ist -> ist es wahr => true


Logische Operatoren

&& Prüfe ob, Wert1 und Wert2 gleich 1 sind -> ist es wahr => true
|| Prüfe ob, Wert1 und Wert2 gleich 1 sind -> ist es wahr => true
!  Nichtige die Aussage


Bitgesteuerte Operatoren

&  Ver-Und-e Wert1 und Wert2 -> 0001 & 1001 -> 0001
|  Ver-Oder-e Wert1 und Wert2 -> 0001 & 1001 -> 1001
^  Ver-Exklusiv-Oder-e Wert1 und Wert2 -> 0001 ^ 1001 -> 1000
~  Kippe jedes Bit um -> 0001 -> 1110
<< Schiebe die Bits um x-Stellen nach links -> 000011 << 2  -> 001100
   oder verschiebe die Daten von innen nach außen -> cout << 2;
   
>> Schiebe die Bits um x-Stellen nach rechts -> 000011 >> 2  -> 110000
   oder verschiebe die Daten von außen nach innen -> cin >> 2;

*/

const short wert1= 10;
const short wert2= 3;
short ergebnis;

int main(void)
{
	ergebnis = wert1 + wert2;
	cout << "Dein Ergebnis lautet: " << ergebnis << endl;
	
	ergebnis = wert1 % wert2;
	cout << "Dein Ergebnis lautet: " << ergebnis << endl;
	return 0;
}

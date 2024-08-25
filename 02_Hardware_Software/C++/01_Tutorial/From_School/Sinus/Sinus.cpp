/*
	Name: Sinus
	Copyright: 
	Author: Waldemar Tschernow
	Date: 08.09.20 13:20
	Description: Funktion Sinus anwenden
	sin() liefert das Bogenmass x zurueck
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
	double angle;
	double resultValue;
	
	cout<<"Sinus berechnen\n";
	cout<<"Geben Sie den Winkel ein: ";
	cin>>angle;
	cout<<endl;
	
	resultValue= sin(angle);
	cout<<"Das Bogenmass vom Winkel: "<<angle<<" lautet: "<<resultValue;
	
	return 0;
}

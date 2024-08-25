#include <iostream>

using namespace std;

//Variablen

int returnValue;

//Prototypen

int minValue(int value1, int value2);


int main(void)
{
	int a, b;
	int value;
	
	cout<<"Geben Sie 2 Zahlen mit Leerzeichen ein und bestaetigen sie mit Enter: ";
	cin>>a>>b;
	
	value= minValue(a, b);
	
	cout<<"Der kleinere Wert ist: "<<value;
	
	return 0;
}


int minValue(int value1, int value2)
{
	if (value1 < value2) 
	{
		return(value1);
	}
	else 
	{
		return(value2);
	}
}

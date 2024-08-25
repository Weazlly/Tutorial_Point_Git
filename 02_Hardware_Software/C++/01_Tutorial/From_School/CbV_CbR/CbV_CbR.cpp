#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void call_by_value(int wert);
void call_by_reference(int *wert);

int main(void)
{
	int value =10;
	
	cout<<"Original Wert: "<<value <<endl;
	
	call_by_value(value);
	cout<<"Nach Funktion 1: "<< value <<endl;
	
	call_by_reference(&value);
	cout<<"Nach Funktion 2: "<< value <<endl;
		
	system("Pause");
	return 0;
}

void call_by_value(int wert)
{	
	wert = wert + 5;
	cout << "Kopierter Wert in Funktion 1: " << wert << endl;
}

void call_by_reference(int *value)
{
	*value =*value + 5;
	cout << "Referenz in Funktion 2: " << *value << endl;
}

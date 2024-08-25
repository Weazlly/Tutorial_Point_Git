#include <iostream>

using namespace std;

int var1;
int varArray[2];

int *pointer; //auch in Kursschreibweise pt

int main(void)
{
	cout<<"Wir haben einen Pointer hier.\n";
	cout<<"Geben Sie eine Zahl ein und wir \nzeigen Ihnen die Speicheradresse Ihres Wertes: ";
	cin>>var1;
	
	pointer= &var1; //Wohin jetzt der Zeiger verweist, zuweisen. 
	
	cout<<"Die Adresse lautet:"<<pointer<<endl; 
	cout<<"Der Wert betraegt:"<<*pointer;
	return 0;
}

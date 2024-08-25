#include <iostream>

using namespace std;

int globalArray[10]; //globales array mit bekannter Größe mit 10 unbekannten werten
int globalArrayTyp2[10] = {0,1,2,3,4,5,6,7,8,9}; //globales array mit bekannter Größe mit 10 bekannten werten
int globalArrayTyp3[] = {10,11,12,13,14,15,15}; //globales array mit unbekannter Größe mit 7 bekannten Werten

int main(void)
{
	int lokalArray[5]; //globales array mit 5 unbekannten werten
	int lokalArrayTyp2[5]={0,1,2,3,4}; //globales array mit 5 bekannten werten
	int lokalArrayTyp3[] = {5,6,7,8,9,10,11,12}; //globales array mit unbekannter Größe mit 8 bekannten Werten
	
	//Nur das Auslesen und Ausgeben von Arrays
	cout<<"Nur den Inhalt von Arrays auslesen und Ausgeben"<<endl;
	cout<<"Der Inhalt von global Array mit bekannter Groesse und mit unbekannten Werten: "<<endl;
	for (int i=0; i<=9; i++)
	{
		cout<<globalArray[i]<<", ";
	}
	cout<<endl;
	cout<<endl;
	
	cout<<"Der Inhalt von global Array mit bekannter Groesse und mit bekannten Werten: "<<endl;
	for (int i=0; i<=9; i++)
	{
		cout<<globalArrayTyp2[i]<<", ";
	}
	cout<<endl;
	cout<<endl;
	
	cout<<"Der Inhalt von global Array mit unbekannter Groesse und mit bekannten Werten: "<<endl;
	for (int i=0; i<=7; i++)
	{
		cout<<globalArrayTyp3[i]<<", ";
	}
	cout<<endl;
	cout<<endl;
	
	cout<<"Der Inhalt von lokal Array mit bekannter Grosse und mit unbekannten Werten: "<<endl;
	for (int i=0; i<=4; i++)
	{
		cout<<lokalArray[i]<<", ";
	}
	cout<<endl;
	cout<<endl;
	
	cout<<"Der Inhalt von lokal Array mit bekannter Groesse und mit bekannten Werten: "<<endl;
	for (int i=0; i<=4; i++)
	{
		cout<<lokalArrayTyp2[i]<<", ";
	}
	cout<<endl;
	cout<<endl;
	
	cout<<"Der Inhalt von lokal Array mit unbekannter Groesse und mit bekannten Werten: "<<endl;
	for (int i=0; i<=8; i++)
	{
		cout<<lokalArrayTyp3[i]<<", ";
	}
	cout<<endl;
	cout<<"-----------------------------------------------------------------------------"<<endl;
	cout<<endl;
	
	//Jetzt Arrays beschreiben und ausgeben
	cout<<"Jetzt Arrays beschreiben und ausgeben"<<endl;
	cout<<"Den Inhalt von global Array fuellen und ausgeben: "<<endl;
	for (int i=20; i<=29; i++)
	{
		globalArray[i]= i;
		cout<<globalArray[i]<<", ";
	}
	cout<<endl;
	cout<<endl;
	
	cout<<"Der Inhalt von lokal Array fuellen und ausgeben: "<<endl;
	for (int i=30; i<=49; i++)
	{
		lokalArray[i]= i;
		cout<<lokalArray[i]<<", ";
	}
	
	return 0;
}

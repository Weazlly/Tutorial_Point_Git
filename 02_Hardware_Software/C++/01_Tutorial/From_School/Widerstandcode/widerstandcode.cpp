/*
	Name: Widersandscode
	Copyright: 
	Author: Waldemar Tschernow
	Date: 27.10.20 06:26
	Description: Der Widerstand wird mit der Anzahl an Farbringen unterschieden und
	anhand der Farbcodierung resultiert der Widerstandswert.
*/

#include <iostream>

using namespace std;

char ring;

int ringCal(int number);
void ringAsk(int index);
void ringMultiplikator(int number);

int main(void)
{
	cout<<"Widerstand Farb Codierer"<<endl; // Titelausgabe
	cout<<"========================\n"<<endl;
	
	do  //Menue start
	{		
		cout<<"Geben Sie die Anzahl an Ringen ein [3] [4] [5] [6]"<<endl; //Menue Bedienungen damit Programm funktioniert
		cout<<"Tippen sie [Q] ein, wird das Programm beendet"<<endl;
		cin>>ring;
		
			switch (ring)	//Differenzierung zwischen Anzahl an Ringen und deren Ausgabe
			{
				case 'Q':	cout<<"Programm wird beendet"<<endl; break;
				
				case '3': 	
					cout<<"Ihr Widerstandswert betraegt: "; //Widerstand mit 3 Ringen
					ringCal(3);
					cout<<endl;
				break;
				 
				case '4':	
					cout<<"Ihr Widerstandswert betraegt: "; //Widerstand mit 4 Ringen
					ringCal(4);
					cout<<endl;				
				break; 
				
				case '5':
					cout<<"Ihr Widerstandswert betraegt: "; //Widerstand mit 5 Ringen
					ringCal(5);
					cout<<endl;
				break; 
				
				case '6':
					cout<<"Ihr Widerstandswert betraegt: "; //Widerstand mit 6 Ringen
					ringCal(6);
					cout<<endl;
				break; 
				
				default:	cout<<"Falsche Eingabe"<<endl;	break; //Bei ungueltiger eingabe
			}
			cout<<endl<<"========================"<<endl<<endl;
	}
	while(ring != 'Q'); //solange die Anzahl ungleich 0 ist, wird das Menue ausgefuehrt
	
	//Menue end
	return 0;
}

int ringCal(int number)
{	 
	int tmp=0;
	for(int i= 1; i<= number; i++)
	{
		switch (i)
		{
			//Ring 1 Ziffer
			case 1:
				ringAsk(i);
				
				cin>>tmp;				
				cout<<endl;
			break;
			
			//Ring 2 Ziffer
			case 2:
				ringAsk(i);
				
				cin>>tmp;
				cout<<endl;
			break;
			
			//Ring 3: Bei 3 Ringen = Multiplikator, Bei 4 Ringen = Ziffer
			case 3:
				ringAsk(i);
				
				cin>>tmp;
				cout<<endl;
			break;
			
			//Ring 4: Bei 4 Ringen = Multiplikator, Bei 5 Ringen = Ziffer
			case 4:
				ringAsk(i);
				
				cin>>tmp;
				cout<<endl;
			break;
			
			//Ring 5 Multiplikator
			case 5:
				ringAsk(i);
				
				cin>>tmp;
				cout<<endl;
			break;
			
			//Ring 6 Temperatur Koeffizent
			case 6:
				ringAsk(i);
				
				cin>>tmp;
				cout<<endl;
			break;
		}
	}
}

/*
Farbe	|	Ziffer	|	Multiplikator
========|===========|=====================
schwarz	|	0 		|	10^0
braun	|	1		|	10^1
rot		|	2		|	10^2
orange	|	3		|	10^3
gelb	|	4		|	10^4
gruen	|	5		|	10^5
blau	|	6		|	10^6
violett	|	7		|	10^7
grau	|	8		|	10^8
weiss	|	9		|	10^9
gold	|	-		|	10^-1
silber	|	-		|	10^-2
		|			|
*/

void ringAsk (int index)
{
	cout<<"Farbcode fuer Ring-Nummer: "<<index<<endl;
	cout<<"Geben Sie die Zahl ein fuer die jeweilige Farbe:"<<endl;
	
	if(index == 1) cout<<"[0]: schwarz"<<endl;
	
	cout<<"[1]: braun"<<endl;
	cout<<"[2]: rot"<<endl;
	cout<<"[3]: orange"<<endl;
	cout<<"[4]: gelb"<<endl;
	cout<<"[5]: gruen"<<endl;
	cout<<"[6]: blau"<<endl;
	cout<<"[7]: violet"<<endl;
	cout<<"[8]: grau"<<endl;
	cout<<"[9]: weiss"<<endl;
	
	if(index >= 3)
	{
		cout<<"[10]: gold"<<endl;
		cout<<"[11]: silber"<<endl;
	}
}

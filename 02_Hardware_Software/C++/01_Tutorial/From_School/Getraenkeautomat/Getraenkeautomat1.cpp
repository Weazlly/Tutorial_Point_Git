#include <iostream>

using namespace std;

int main(void)
{
	unsigned short drink; //define lokal variable
	unsigned short money;
	unsigned short payback;
	
	const unsigned short cola= 2;
	const unsigned short fanta= 2;
	const unsigned short water= 1;
	
	cout<<"Welches Getraenk wollen Sie?\n"; //show the customer what this programm does
	cout<<"1: Cola | 2: Fanta | 3: Wasser\n";
	cout<<"Tippen Sie 1,2 oder 3 ein\n";
	cin >> drink;
	
	switch(drink)	//status maschine
	{
		case 1: 			// Reaction of wish 1
			cout<<"Sie haben Cola gewaehlt\n";
			cout<<"Werfen Sie "<<cola<<" Euro ein\n";
			cout<<"Bitte nur ganze Euro Betraege hineinwerfen\n";
			cin>>money;
			
			if (money == cola)	// Paying correctly summ
			{
				cout<<"Danke fuer Ihren Kauf. Schoenen Tag noch.\n";
				cout<<"Automat wird beendet";
			}
			else if (money > cola) 	// bigger summ
			{
				payback= money - cola;
				cout<<"Hier ihr Rueckgeld: "<<payback<<" Euro\n";
				cout<<"Danke fuer Ihren Kauf. Schoenen Tag noch.\n";
				cout<<"Automat wird beendet";
			}
			else // smaller summ
			{
				cout<<"Vorgang wird abgebrochen\n";
				cout<<"Hier Ihr Geld zurueck ohne Ware: "<<money<<" Euro\n";
				cout<<"Automat schaltet sich ab.";
			}
		break;
		
		case 2: // Reaction of wish 2
			cout<<"Sie haben Fanta gewaehlt\n";
			cout<<"Werfen Sie "<<fanta<<" Euro ein\n";
			cout<<"Bitte nur ganze Euro Betraege hineinwerfen\n";
			cin>>money;
			if (money == fanta)	// Paying correctly summ
			{
				cout<<"Danke fuer Ihren Kauf. Schoenen Tag noch.\n";
				cout<<"Automat wird beendet";
			}
			else if (money > fanta) 	// bigger summ
			{
				payback= money - fanta;
				cout<<"Hier ihr Rueckgeld: "<<payback<<" Euro\n";
				cout<<"Danke fuer Ihren Kauf. Schoenen Tag noch.\n";
				cout<<"Automat wird beendet";
			}
			else // smaller summ
			{
				cout<<"Vorgang wird abgebrochen\n";
				cout<<"Hier Ihr Geld zurueck ohne Ware: "<<money<<" Euro\n";
				cout<<"Automat schaltet sich ab.";
			}
		break;
		
		case 3: // Reaction of wish 3
		if (money == water)	// Paying correctly summ
			cout<<"Sie haben Wasser gewaehlt\n";
			cout<<"Werfen Sie "<<water<<" Euro ein\n";
			cout<<"Bitte nur ganze Euro Betraege hineinwerfen\n";
			cin>>money;
			if(money == water)
			{
				cout<<"Danke fuer Ihren Kauf. Schoenen Tag noch.\n";
				cout<<"Automat wird beendet";
			}
			else if (money > water) 	// bigger summ
			{
				payback= money - water;
				cout<<"Hier ihr Rueckgeld: "<<payback<<" Euro\n";
				cout<<"Danke fuer Ihren Kauf. Schoenen Tag noch.\n";
				cout<<"Automat wird beendet";
			}
			else // smaller summ
			{
				cout<<"Vorgang wird abgebrochen\n";
				cout<<"Hier Ihr Geld zurueck ohne Ware: "<<money<<" Euro\n";
				cout<<"Automat schaltet sich ab.";
			}
		break;
		
		default:
			cout<<"Ungueltige Eingabe. Automat schaltet sich ab";
			return 0;		
		break;
	}
	return 0;
}

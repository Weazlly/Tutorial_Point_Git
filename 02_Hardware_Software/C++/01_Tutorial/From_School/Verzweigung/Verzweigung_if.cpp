#include <iostream>


using namespace std;

int main(void)
{
	unsigned short eier;
	unsigned short milch;
	unsigned short eierInGramm;
	float gesamtMenge;
	float portion;
	
	cout << "Ruehrei fuer x Portionen" << endl;
	cout << "Alle Groessen zwischen 0 bis 65.000 sind moeglich" << endl;
	cout << "Gebe Sie die Anzahl an Eier ein: ";
	cin >> eier;
	cout << "\nGeben Sie die Menge der Milch in ml an: ";
	cin >> milch;
	
	eierInGramm = eier * 65;
	gesamtMenge = eierInGramm + milch;
	
	if (gesamtMenge <= 65)cout << "Milch fehlt" << endl;
	
	if (gesamtMenge > 65 && gesamtMenge < 265)
	{
		cout << "Eier fehlen" << endl;
	}
	
	if (gesamtMenge >= 265)
	{
		portion= gesamtMenge / 265;
		
		cout << "Ruehrei Portion betraegt: " << portion << endl;
	}
	
	return 0;
}

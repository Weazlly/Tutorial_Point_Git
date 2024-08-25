#include <iostream>

using namespace std;

short zahl;
char  zeichen;

short fehler;

int main(void)
{
	cout << "Hello World"; //Ausgabe ohne Zeilenumbruch
	cout << "Ich bin ein Text" << endl; // Ausgabe mit Zeilenumbruch als Befehl
	cout << "Das ist eine Ausgabe\n";  // Ausgabe mit Zeilenumbruch mit Zeichencode
	
	cout << "Gebe eine Zahl ein\n";
	cin >> zahl;						// Eingabe per Tastatur für Zahlen
	cout << "Das ist deine Zahl: " << zahl << endl; 
	
	cout << "Gebe ein Zeichen ein\n";
	cin >> zeichen;						// Eingabe per Tastatur für Zeichen
	cout << "Das ist dein Zeichen: " << zeichen << endl;
	fflush(stdin);

	cout << "Gebe eine Zahl ein\n";
	cin >> fehler;						// Erkenne den Fehler -> Datentyp legt fest was du eintippen kannst und was nicht
	cout << "Das ist ein Test: " << fehler << endl;
	
	return 0;
}

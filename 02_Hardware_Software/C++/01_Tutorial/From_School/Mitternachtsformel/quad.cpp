#include <iostream>
#include <cmath>
using namespace std;


//Funktionen
int anzahlErgebnisse(double _a, double _b, double _c); 						 //Rückgabewert Integer | Name: anzahlErgebnise ([Parameter1 Datentyp: double | Variablenname: _a], ...)
double diskriminante(double _a, double _b, double _c); 						 //Rückgabewert Double | Name: diskriminante ([Parameter1 Datentyp: double | Variablenname: _a], ...)
double wurzel(double _D);							   						 //Rückgabewert Double | Name: wurzel ([Parameter1 Datentyp: double | Variablenname: _D])
void mitternachtsformel_1(double _D, double _b, double _a);   			 	 //Rückgabewert void (keinen) | Name: mitternachtsformel_1 ([Parameter1 Datentyp: double | Variablenname: _D], ...)
void mitternachtsformel_2(double _pD, double _nD, double _b, double _a);     //Rückgabewert void (Keinen) | Name: mitternachtsformel_2 ([Parameter1 Datentyp: double | Variablenname: _D], ...)

int main()
{
	double a,b,c;
	double positivD, negativD, D;
	int anzahl;
	
	//////////////////////////////////////////////////////////////////////////////////////////////////
	// User Eingabe
	cout<<"Mitternachtsformel"<<endl;
	cout<<"Geben Sie die Faktoren: [a],[b] und [c] in der richtigen Reihenfolge ein."<<endl;
	cin>>a>>b>>c;
	
	//////////////////////////////////////////////////////////////////////////////////////////////////
	//Schritt 1: Anzahl an möglichen Ergebnissen: b² - 4 * a * c
	anzahl= anzahlErgebnisse(a,b,c);	//Der Rückgabewert von "anzahlErgebnisse" wird in Anzahl geschrieben
										//Parameter a, b und c werden an "anzahlErgebnisse" übergeben

	
	//////////////////////////////////////////////////////////////////////////////////////////////////
	//Schritt 2: Diskriminante errechnen 
	
	if(anzahl == 0)			//Rechenregel: Kein Negativer Wert unter der Wurzel
	{
		cout<<"Keine Loesungen"<<endl;	//Ausgabe: Keine Loesungen
		cout<<"Math Error"<<endl;		//Ausgabe: Mathe Error / Abbruch von Programm
		return 0;
	}
	else		
	{
		D = diskriminante(a, b, c);		//Berechne die Diskriminante und speichere in D
	}

	
	//////////////////////////////////////////////////////////////////////////////////////////////////
	//Schritt 3: Wurzel errechnen
	
	if(anzahl == 1) // Unterscheidung ein Ergebnis
	{
		positivD = wurzel(D);	
	}
	else			// oder zwei Ergebnisse
	{
		positivD = wurzel(D);
		negativD = wurzel(D) * -1;
	}
	
	//////////////////////////////////////////////////////////////////////////////////////////////////
	//Schritt 4: Restliche Mitternachtsformel
	
	if(anzahl == 1)
	{
		mitternachtsformel_1(positivD, b, a);
	}
	else 
	{
		mitternachtsformel_2(positivD, negativD, b, a);
	}
	

	system("Pause");
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//Unterprogramm ...

int anzahlErgebnisse(double _a, double _b, double _c)		//... welche die Anzahl an möglichen Ergebnissen liefert
{
	int num;					//Erstelle temporär eine lokale Variable
	num= pow(_b, 2) - 4*_a*_c;		//Diskriminanten errechnen
	
	if (num < 0)				//Diskriminanten Regel
	{
		return 0;				//Geben den Wert zurück: Kein Ergebnis
	}	
	else
	{
		return num;			//Gebe den Wert zurück: Ein oder Zwei Ergebnis(se)
	}	
}

double diskriminante(double _a, double _b, double _c)		//... welche die errechnete Diskriminante zurück liefert
{
	double dis;				//Erstelle temporär eine lokale Variable
	dis= pow(_b, 2) - 4*_a*_c;	//Diskriminanten errechnen
	return dis;				//Gebe den Wert von diskriminante zurück
}

double wurzel(double _D)
{
	double w;		//Erstelle temporär eine lokale Variable
	w= sqrt(_D); 	//Ziehe die Wurzel von _D
	return w;		//Gebe den Wert von wurzel zurück
}

void mitternachtsformel_1(double _D, double _b, double _a)	//... welche ein Ergebnis ausgibt
{
	double ergebnis; //Erstelle temporär eine lokale Variable
	ergebnis= ((-1*_b) + _D) / (2 * _a);	//Berechnung von restlicher Mitternachtsformel
	cout<<"Das Ergebnis der Mitternachtsformel lautet: "<<ergebnis<<endl; //Gebe das Ergebnis aus
}

void mitternachtsformel_2(double _pD, double _nD, double _b, double _a) //... welche zwei Ergebnisse ausgibt
{
	double ergebnis; //Erstelle temporär eine lokale Variable
	ergebnis= ((-1*_b) + _pD) / (2 * _a); //Berechnung von restlicher Mitternachtsformel mit positivem Wurzelergebnis
	cout<<"Das positive Ergebnis der Mitternachtsformel lautet: "<<ergebnis<<endl; //Gebe das Ergebnis aus
	ergebnis= ((-1*_b) + _nD) / (2 * _a); //Berechnung von restlicher Mitternachtsformel mit negativem Wurzelergebnis
	cout<<"Das negative Ergebnis der Mitternachtsformel lautet: "<<ergebnis<<endl; //Gebe das Ergebnis aus
} 

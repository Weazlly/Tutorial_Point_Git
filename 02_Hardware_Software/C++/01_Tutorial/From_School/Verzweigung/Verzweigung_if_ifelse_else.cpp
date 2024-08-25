#include <iostream>

using namespace std;


int main(void)
{
	short lokal;
	
	cout << "Geben sie eine Zahl fuer Lokal ein: ";
	cin >> lokal;
	
	switch (lokal)
	{
		case 1: cout << "Lokal ist: 1";	break;
		case 2:	cout << "Lokal ist: 2";	break;
		case 3:	cout << "Lokal ist: 3";	break;
		case 4:	cout << "Lokal ist: 4";	break;
		case 5:	cout << "Lokal ist: 5";	break;
		case 6:	cout << "Lokal ist: 6";	break;
		case 7:	cout << "Lokal ist: 7";	break;
		case 8:	cout << "Lokal ist: 8";	break;
		case 9:	cout << "Lokal ist: 9";	break;
		case 10: cout << "Lokal ist: 10";break;
		default: cout << "Lokal ist eine andere Zahl"; break;
	}
	return 0;
}

#include <iostream>

using namespace std;

int main(void)
{
	unsigned short value1;
	unsigned short value2;
	unsigned short result;
	char character;
	
	cout<< "Taschenrechner beginnt. Tragen Sie die erste Ganzzahl ein.\n";
	cin>> value1;
	cout<< "Tragen Sie das Zeichen ein: + | - | * | / | % = Modulo Restergebnis einer Division\n";
	cin>> character;
	fflush(stdin);
	cout<< "Tragen Sie die 2. Ganzzahl ein.\n";
	cin>> value2;
	
	switch(character)
	{
		case '+':
			result= value1 + value2;
			cout<< "Dein Ergebnis ist: "<<result<<endl;
		break;
		
		case '-':
			result= value1 - value2;
			cout<< "Dein Ergebnis ist: "<<result<<endl;
		break;
		
		case '*':
			result= value1 * value2;
			cout<< "Dein Ergebnis ist: "<<result<<endl;
		break;
		
		case '/':
			result= value1 / value2;
			cout<< "Dein Ergebnis ist: "<<result<<endl;
		break;
		
		case '%':
			result= value1 % value2;
			cout<< "Dein Ergebnis ist: "<<result<<endl;
		break;
	}
	return 0;
}

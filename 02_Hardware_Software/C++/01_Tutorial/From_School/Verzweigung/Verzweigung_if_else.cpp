#include <iostream>

using namespace std;

short global;

int main(void)
{
	cout << "Gebe fuer global eine Zahl ein: ";
	cin >> global;
	
	if (global == 10)cout<<"Hello 10"<<endl;
	else "Ciao 10";
	
	
	if (global == 5)
	{
		cout<<"Hello 5"<<endl;
	}
	else
	{
		cout<<"Ciao 5"<<endl;
	}
	
	
	if (global == 2)
	{
		cout<<"Doppelt\n";
		cout<<"haelt besser\n";
	}
	else
	{
		cout<<"Bin was\n";
		cout<<"anderes\n";
	}
	return 0;
}

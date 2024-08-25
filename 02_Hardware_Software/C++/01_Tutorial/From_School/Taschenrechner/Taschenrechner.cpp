#include <iostream>

using namespace std;

int main()
{
	
	int a,b,f;
	
	cin>>f;
	
	switch(f)
	{
		case 1: cout<<"+"<<endl; break;
		case 2: cout<<"-"<<endl; break;
		case 3: cout<<"*"<<endl; break;
		case 4: cout<<"/"<<endl; break;
		default: cout<<"fehler"<<endl; break;
	}
	return 0;
}

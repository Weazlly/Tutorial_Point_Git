/*
	Name: Potenzialtabelle
	Copyright: 
	Author: Waldemar Tschernow
	Date: 08.09.20 13:10
	Description: Erzeugen einer Potenzialtabelle
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
	float resultValue;
	cout<<"x\tx^2"<<endl;
	
	for (float i=1; i<=10; i++)
	{
		resultValue= pow(i, 2);
		cout<<i<<"\t"<<resultValue<<endl;
	}
	return 0;
}

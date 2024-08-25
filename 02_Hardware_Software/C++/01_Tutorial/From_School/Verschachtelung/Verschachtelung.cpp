#include <iostream>

using namespace std;


int main(void)
{
	///////// if Verschachtelung
	unsigned short i;
	
	cout << "Geben Sie eine Zahl zwischen 1 bis 10 ein"<<endl;
	cin >> i;
	
	if(i < 10)
	{
		if(i > 5)
		{
			if(i > 7)
			{
				cout<<"i ist: "<<i<<endl;
			}
			else
			{
				i= 8;
			}
		}
		else
		{
			i= 2;
		}
	}
	else
	{
		i= 0;
	}
	
	///////// for Verschachtelung
	
	for (short j; j<=10; j++)
	{
		for (short k=0; k<=10; k++)
		{
			cout<<"k ist: "<<k<<"\t";
		}
		cout<<"j ist: "<<j<<endl;
	}
	
	///////// for in if Verschachtelung
	
	unsigned short m=0;
	
	if (m<= 10)
	{
		for(m; m<=10; m++)
		{
			cout<<"m ist: "<<m<<endl;
		}
	}
	
	///////// if in for Verschachtelung
	
	unsigned short n=0;
	
	for(n; n<= 10; n++)
	{
		if(n > 7)
		{
			n= 10;
			cout<<"n ist: "<<n<<endl;
		}
		else
		{
			cout<<"n ist: "<<n<<endl;
		}
	}
	
	return 0;
}

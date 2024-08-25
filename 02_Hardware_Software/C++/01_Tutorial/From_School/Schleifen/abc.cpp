#include <iostream>

using namespace std;

int main(void)
{
	char abc= 'A';
	
	while (abc < 'z')
	{
		cout<<abc<<endl;
		abc++;
	}
	
	cout<<abc<<endl;
	cout<<endl;
	
	while (abc >= 'A')
	{
		cout<<abc<<endl;
		abc--;
	}
	return 0;
}

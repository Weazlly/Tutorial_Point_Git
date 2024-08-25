#include <iostream>

using namespace std;

int lengh= 10;
int value[]={0};

int main(void)
{
	cout<<"Zahlensortierer von klein nach gross\n";
	cout<<"Tragen Sie die Anzahl von Zahlen ein(1-100): ";
	cin>>lengh;
	cout<<"Geben Sie "<<lengh<<" Zahlen ein. Erlaubt von 0-9\n";
	cout<<"z.B.: 3 8 3 9 7 6 1 2 5 4\n";
	
	for(int i=0; i < lengh; i++) cin>>value[i]; 
	
	int tmp;
	
	for (int j= 0; j< lengh; j++)
	{
		for (int k= 0; k< lengh; k++)
		{
			if(value[j] > value[k])
			{
				
			}
			else if(value[j] == value [k])
			{
				value[j]=value[k];
			}
			else
			{
				tmp= value[j];
				value[j]= value[k];
				value[k]= tmp;
			}
		}
	}
	
	for (int m= 0; m< lengh; m++)
	{
		cout<<value[m]<<" ";
	}
	return 0;
}

#include <iostream>

using namespace std;

int array2D [8][8]= {0}; //Alle Felder mit 0 befuellen

int main(void)
{
	//Einzelbeschreibung
	
	array2D[0][0]= 1;
	array2D[7][7]= 64; 
	
	//Kleines Ausgabe Beispiel
	for (int i=0; i<= 7; i++)
	{
		for (int j=0; j<= 7; j++)
		{
			cout<<array2D[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}

#include <iostream>

using namespace std;

//Thema Rekursion

int rekursion(int anzahl)
{
	cout<<"Anzahl Orange: "<< anzahl<<endl;
	anzahl++;
	

	rekursion(anzahl);

}

int main(void)
{
	int orange = 1;
	rekursion(orange);
	
	return 0;
}

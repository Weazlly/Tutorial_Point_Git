#include <iostream>

using namespace std;


///// Variablen global
int global;
int variable1; 

///// Konstante global
const int global_const= 10;

/////////////////////////////////////////////////////////////////////////////////////

int main(void)
{
	// Lokale Konstanten in Lokale Variablen einf�gen
	int lokal;
	const int lokal_const= 5;
	
	// Globale Konstanten in Globale Variablen einf�gen
	global = global_const;
	lokal = lokal_const;
	
	return 0;
}

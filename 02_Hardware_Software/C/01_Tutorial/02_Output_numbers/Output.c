/////////////////////////////////////////////////////////////////
//
// Author:		Waldemar Tschernow
// Date:		08.09.2024
// Description: Output operator
// Compiled:	gcc
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
	printf("%d ", 255); 		//output decimal
	printf("%f ", 3.14); 		//output decimal float number, value dot . not with comma ,
	printf("%c ", 'F'); 		//output charakter
	printf("%s ", "String");	//output strings (charakter chain)
	printf("\nnewline"); 		//output new line
	printf("\n-------------\nAll together");
	printf("Age: %d\nNumber of Pi: %f\nYour name beginns with: %c\n%s", 28, 3.14, 'W', "This was all together"); //all together now
	
	return 0;
}
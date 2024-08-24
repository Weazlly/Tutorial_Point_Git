//////////////////////////////////////////////////////////////////////////
// 
// Author: Waldemar Tschernow
// Date: 24.08.2024
// Version: 0.0.1
// Description: Write a console program that reads in a character and 
//              outputs this character both as a character 
//              and as a decimal or hexadecimal value.
//              as a character and as a decimal or hexadecimal value.
//              Use both scanf and cin for the input, for the output try
//              cout and printf for output.
// 
//////////////////////////////////////////////////////////////////////////

#include <cstdio>   //include libary for input output
#include <iostream> //include libary for input output console

using namespace std; //using name area std

char ch_charakter;
int n_dec;
int n_hex;

int main() //start the main programm
{
    cout << "Press one key and you see the decimal and hex Value of the char" << endl << endl;
    cin >> ch_charakter;
    cout << n_dec;


    system("Pause");       //Pause the console
    return 0;              //return value for end of programm without problems
}

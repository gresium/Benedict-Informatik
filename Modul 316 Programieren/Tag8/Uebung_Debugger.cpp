// ***************************************************
// Projekt:      Uebung Debugger (verschachtelte Schleifen)
// Author:       Gresa Hisa
// Datum:        21.11.2026
// Programmname: Uebung_Debugger.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int i, j;
	
	for(i=0; i<10; i++)
	{
		cout << "\nZeile " << i+1 << " : ";
	
		for(j=0; j<=i; j++)
		{
			cout << "*";
		}
	}
	
	cout << endl;
system("PAUSE");
return 0;
}

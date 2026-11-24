// ***************************************************
// Projekt:      Drei Zahlen vergleichen
// Author:       Gresa Hisa
// Datum:        18.11.2026
// Programmname: DreiZahlenvergleichen.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{

	int x, y, z;
	cout << "Eingabe x Zahl 1 ";
	cin >> x;
	fflush(stdin);
	cout << "Eingabe y Zahl 2 ";
	cin >> y;
	fflush(stdin);
	cout << "Eingabe z Zahl 3 ";
	cin >> z;
	fflush(stdin);
	
	if(x == y || x == z || y == z)
	{
		cout << "Zwei Zahlen sind gleich.\n";
	}
	else if(x < y && x < z)
		 {
	   	 	cout << "x ist die kleinste Zahl " << x << "\n";
	 	 }
		 else if(y < x && y < z)
		      {
	          	cout  << "y ist die kleinste Zahl "  << y << "\n";
	          }
	          else
	          {
				cout  << "z ist die kleinste Zahl " << z << "\n";
	          }
	
cout << "\n";
system("PAUSE");
return 0;
}

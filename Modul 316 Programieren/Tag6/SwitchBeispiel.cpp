// ***************************************************
// Projekt:      SwitchBeispiel
// Author:       Gresa Hisa
// Datum:        20.11.2026
// Programmname: SwitchBeispiel.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	char Eingabe;
	cout << "Geben Sie eine Zahl zwischen 1 und 4 ein : ";
	cout << "Oder E fuer Ende";
	cin >> Eingabe;

	switch(Eingabe)
  	{
		case '1' :
		cout << "Du hast 1 eingegeben" << "\n";
		break;

  		case '2' : cout << "Du hast 2 eingegeben" << "\n";
  		break;
  		
		case '3' : cout << "Du hast 3 eingegeben" << "\n";
  		break;
  		
  		case '4' : cout << "Du hast 4 eingegeben" << "\n";
  		break;
  		
  		case 'E' : cout << "Und Tschuess!";
  				   system("PAUSE");
  				   return 0;
  
  		default: cout << "Unbekannte Eingabe?!" << "\n";
    }

system("PAUSE");
return 0;
}

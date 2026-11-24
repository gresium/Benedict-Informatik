// ***************************************************
// Projekt:      Funktion_mit_Referenz
// Author:       Gresa Hisa
// Datum:        25.11.2026
// Programmname: Funktion_mit_Referenz_Spezial.cpp
// ***************************************************

#include <iostream>

using namespace std;

void name(int &hallo) {
	cout << "1. Das ist in Hallo drin: " << hallo << "\n";
	hallo = 24;
}

int main() {

	int a = 12; // eine Variable
	name(a);
	cout << "2. Das ist jetzt neu drin: " << a << "\n";

	int e, f, g;
	e = f = g = a;
	cout << "Und hier haben die Vari e, f, g den Inhalt \n";
	cout << "von a erhalten: " << e << ", " << f << ", " << g;
	cout << "\n\n";
	return 0;
}

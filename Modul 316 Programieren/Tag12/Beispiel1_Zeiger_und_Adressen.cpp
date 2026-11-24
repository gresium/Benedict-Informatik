// ***************************************************
// Projekt:      Zeiger_und_Adressen_1
// Author:       Gresa Hisa
// Datum:        25.11.2026
// Programmname: Beispiel1_Zeiger_und_Adressen.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	int b = 5;
	int *a = &b;
	cout << "1. Ausgabe: " << a << endl;
	cout << "2. Ausgabe: " << &b << endl;
	cout << "3. Ausgabe: " << &a << endl;
	cout << "4. Ausgabe: " << *a << endl;
	cout << "5. Ausgabe: " << b << endl;

	cout << "\n";
	system("PAUSE");
	return 0;
}

// ***************************************************
// Projekt:      Zeiger_und_Adressen_2
// Author:       Gresa Hisa
// Datum:        25.11.2026
// Programmname: Beispiel2_mit_Zeiger_Adressen.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int Vari1 = 10;
	int Vari2 = 20;

	cout << "Das steht drin in V1 : " << Vari1 << endl;
	cout << "Das steht drin in V2 : " << Vari2 << endl;
	cout << "Das ist die Adresse von V1 : " << &Vari1 << endl;
	cout << "Das ist die Adresse von V2 : " << &Vari2 << endl << endl;

	int *VarZeiger = &Vari2;
	cout << "Das steht drin in Vzeiger : " << VarZeiger << endl;
	cout << "Das ist die Adresse von Vzeiger : " << &VarZeiger << endl;
	cout << "Was steht in Var2 drin (Wert) : " << *VarZeiger << endl;

	cout << "\n";
	system("PAUSE");
	return 0;
}

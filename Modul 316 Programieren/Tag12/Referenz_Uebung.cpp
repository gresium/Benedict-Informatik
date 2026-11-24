// ***************************************************
// Projekt:      Referenz_Uebung
// Author:       Gresa Hisa
// Datum:        25.11.2026
// Programmname: Referenz_Uebung.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int a = 10;
	int b = 20;
	int &r = a;
	cout << "a: " << a << " b: " << b << " r: " << r << endl;
	++a;
	cout << "a: " << a << " b: " << b << " r: " << r << endl;
	r = b;
	cout << "a: " << a << " b: " << b << " r: " << r << endl;
	system("PAUSE");
}

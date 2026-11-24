// ***************************************************
// Projekt:      Array_INT
// Author:       Gresa Hisa
// Datum:        25.11.2026
// Programmname: Array_INT.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int Arrayname[10];
	// Ist auch so möglich.
	//int Arrayname[10] = {100,110,120,130,140,150,160,170,180,190};

	int Loesung;
	// In die einzelnen Zellen werden Zahlen gespeichert.
	Arrayname[0] = 100;
	Arrayname[1] = 110;
	Arrayname[2] = 120;
	Arrayname[3] = 130;
	Arrayname[4] = 140;
	Arrayname[5] = 150;
	Arrayname[6] = 160;
	Arrayname[7] = 170;
	Arrayname[8] = 180;
	Arrayname[9] = 190;
	// Zwei Werte werden aus dem Array gelesen und addiert.
	Loesung = Arrayname[0] + Arrayname[6];
	// Hier erfolgt die Ausgabe.
	cout << "Das Ergebnis lautet (Platz 1 + Platz 7): " << Loesung;
	cout << endl << endl;
	system("PAUSE");
	return 0;
}

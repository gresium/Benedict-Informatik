// ***************************************************
// Projekt:      Array_mit_FOR_EACH_Schlaufe
// Author:       Gresa Hisa
// Datum:        25.11.2026
// Programmname: Array_mit_FOR_EACH_Schlaufe.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int Arrayname[5], i;
	// In die einzelnen 5 Zellen werden Zahlen gespeichert.
	Arrayname[0] = 100;
	Arrayname[1] = 110;
	Arrayname[2] = 120;
	Arrayname[3] = 130;
	Arrayname[4] = 140;

// Werte aus Array auslesen.
	for (i = 0; i < 5; i++) {
		cout << "Zelle = " << i << " Inhalt ist: " << Arrayname[i] << endl;
	}
	// Jetzt mit einer for-each Schleife
	for (int inhalt : Arrayname) {
		cout << inhalt << endl;
	}
	system("PAUSE");
	return 0;
}

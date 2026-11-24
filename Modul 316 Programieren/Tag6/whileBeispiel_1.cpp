// ***************************************************
// Projekt:      while Beispiel mit Alter
// Author:       Gresa Hisa
// Datum:        20.11.2026
// Programmname: whileBeispiel_1.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int Alter, Ende = 0;
	while (Ende != 2) {
		cout << "Druecke fuer die Ausfuehrung die folgenden Tasten:" << endl;
		cout << "<1> Beginn des Programms" << endl;
		cout << "<2> Beendung des Programms" << endl;
		cin >> Ende;
		cout << "Deine Wahl war: " << Ende << endl << endl;

		switch (Ende) {
			case 1:
				cout << "Gebe ein, wie alt du bist: ";
				cin >> Alter;
				cout << "\n";
				if (Alter < 14) {
					cout << "Du bist ein Kind\n\n";
				} else if (Alter >= 14 && Alter < 18) {
					cout << "Du bist ein Teenager\n\n";
				} else {
					cout << "Du bist erwachsen\n\n";
				}
			case 2:
				break;
		}
	}
	system("PAUSE");
	return 0;
}

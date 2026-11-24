// ***************************************************
// Projekt:      Durch 2 teilbar?
// Author:       Gresa Hisa
// Datum:        23.11.2026
// Programmname: durch_2_teilbar.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>

using namespace std;

// Prototypen
bool istDurch2Teilbar(int zahl);
void ausgabe(int zahl, bool teilbar);

int main() {
    int eingabe;

    // Titel und Summary
    cout << "Programm: Durch 2 teilbar?" << endl;
    cout << "--------------------------" << endl;
    cout << "Prueft, ob eine eingegebene Zahl durch 2 teilbar ist." << endl << endl;

    // Eingabe
    cout << "Geben Sie eine ganze Zahl ein: ";
    cin >> eingabe;

    // Verarbeitung und Ausgabe in Funktionen
    ausgabe(eingabe, istDurch2Teilbar(eingabe));

    system("PAUSE");
    return 0;
}

// Verarbeitung: Ausscheidung der 0, dann Restdivision durch 2
bool istDurch2Teilbar(int zahl) {
    if (zahl == 0) {
        return false;
    }
    return (zahl % 2 == 0);
}

// Ausgabe
void ausgabe(int zahl, bool teilbar) {
    if (teilbar) {
        cout << endl << zahl << " ist durch 2 teilbar." << endl << endl;
    } else {
        cout << endl << zahl << " ist nicht durch 2 teilbar." << endl << endl;
    }
}

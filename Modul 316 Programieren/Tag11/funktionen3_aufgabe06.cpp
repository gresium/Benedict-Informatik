// ***************************************************
// Projekt:      10 Aufgaben mit Funktionen Teil 3 - Aufgabe 06: Sequenzgenerierung ueber eine Schleife
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen3_aufgabe06.cpp
// ***************************************************

#include <iostream>
#include <vector>

using namespace std;

vector<int> erzeugeSequenz(int n);

int main() {
    int n = 10;
    vector<int> liste = erzeugeSequenz(n);

    cout << "Die ersten " << n << " natuerlichen Zahlen: ";
    for (int i = 0; i < (int)liste.size(); i++) {
        cout << liste[i] << " ";
    }
    cout << endl;
    return 0;
}

// Erzeugt die Zahlen 1 bis n (aufsteigend) und gibt sie als Liste zurueck.
vector<int> erzeugeSequenz(int n) {
    vector<int> ergebnis;
    for (int i = 1; i <= n; i++) {
        ergebnis.push_back(i);
    }
    return ergebnis;
}

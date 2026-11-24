// ***************************************************
// Projekt:      Workshop Funktionen 2 - Aufgabe 06: Durchschnitt eines Arrays
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen2_aufgabe06.cpp
// ***************************************************

#include <iostream>

using namespace std;

double durchschnitt(int arr[], int laenge);

int main() {
    int zahlen[] = {4, 8, 15, 16, 23, 42};
    int laenge = 6;
    cout << "Durchschnitt: " << durchschnitt(zahlen, laenge) << endl;
    return 0;
}

double durchschnitt(int arr[], int laenge) {
    int summe = 0;
    for (int i = 0; i < laenge; i++) {
        summe = summe + arr[i];
    }
    return static_cast<double>(summe) / laenge;
}

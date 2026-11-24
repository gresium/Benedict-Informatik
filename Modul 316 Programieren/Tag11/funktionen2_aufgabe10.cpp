// ***************************************************
// Projekt:      Workshop Funktionen 2 - Aufgabe 10: Array invertieren mit Zeigern
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen2_aufgabe10.cpp
// ***************************************************

#include <iostream>

using namespace std;

void invertiereArray(int* arr, int laenge);
void zeigeArray(const int* arr, int laenge);

int main() {
    int zahlen[] = {1, 2, 3, 4, 5, 6};
    int laenge = 6;

    cout << "Vorher:  ";
    zeigeArray(zahlen, laenge);

    invertiereArray(zahlen, laenge);

    cout << "Nachher: ";
    zeigeArray(zahlen, laenge);
    return 0;
}

void invertiereArray(int* arr, int laenge) {
    int* anfang = arr;
    int* ende = arr + laenge - 1;
    while (anfang < ende) {
        int temp = *anfang;
        *anfang = *ende;
        *ende = temp;
        anfang++;
        ende--;
    }
}

void zeigeArray(const int* arr, int laenge) {
    for (int i = 0; i < laenge; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

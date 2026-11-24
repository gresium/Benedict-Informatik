// ***************************************************
// Projekt:      Workshop Funktionen 2 - Aufgabe 07: Groesstes Element in einem Array
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: funktionen2_aufgabe07.cpp
// ***************************************************

#include <iostream>

using namespace std;

int maxElement(int* arr, int size);

int main() {
    int zahlen[] = {3, 99, 12, 57, 8};
    int groesse = 5;
    cout << "Groesstes Element: " << maxElement(zahlen, groesse) << endl;
    return 0;
}

int maxElement(int* arr, int size) {
    int max = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

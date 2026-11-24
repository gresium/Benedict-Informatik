// ***************************************************
// Projekt:      Inventarverwaltung (Tech Innovators GmbH)
// Author:       Gresa Hisa
// Datum:        24.11.2026
// Programmname: inventar.cpp
// ***************************************************

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

const int MAX_ARTIKEL = 50;   // maximale Anzahl Artikel
const int NAME_LAENGE = 30;   // maximale Laenge eines Artikelnamens

// Prototypen
void zeigeMenue();
void artikelHinzufuegen(char namen[][NAME_LAENGE], int* mengen, int* anzahl);
void inventarAnzeigen(const char namen[][NAME_LAENGE], const int* mengen, int anzahl);
void artikelSuchen(const char namen[][NAME_LAENGE], const int* mengen, int anzahl);
void artikelLoeschen(char namen[][NAME_LAENGE], int* mengen, int* anzahl);
int findeArtikel(const char namen[][NAME_LAENGE], int anzahl, const char* suchName);

int main() {
    char namen[MAX_ARTIKEL][NAME_LAENGE];   // Artikelnamen (char-Arrays)
    int mengen[MAX_ARTIKEL];                // Lagermengen
    int anzahl = 0;                         // aktuell gespeicherte Artikel
    int wahl;

    do {
        zeigeMenue();
        cin >> wahl;
        cin.ignore(10000, '\n');

        switch (wahl) {
            case 1: artikelHinzufuegen(namen, mengen, &anzahl); break;
            case 2: inventarAnzeigen(namen, mengen, anzahl); break;
            case 3: artikelSuchen(namen, mengen, anzahl); break;
            case 4: artikelLoeschen(namen, mengen, &anzahl); break;
            case 0: cout << "\nProgramm beendet." << endl; break;
            default: cout << "\nUngueltige Auswahl." << endl;
        }
    } while (wahl != 0);

    return 0;
}

void zeigeMenue() {
    cout << "\n=== Inventarverwaltung ===" << endl;
    cout << "1) Artikel hinzufuegen" << endl;
    cout << "2) Inventar anzeigen" << endl;
    cout << "3) Artikel suchen" << endl;
    cout << "4) Artikel loeschen" << endl;
    cout << "0) Beenden" << endl;
    cout << "Ihre Wahl: ";
}

// Gibt den Index des Artikels zurueck oder -1, wenn er nicht gefunden wurde.
int findeArtikel(const char namen[][NAME_LAENGE], int anzahl, const char* suchName) {
    for (int i = 0; i < anzahl; i++) {
        if (strcmp(namen[i], suchName) == 0) {
            return i;
        }
    }
    return -1;
}

void artikelHinzufuegen(char namen[][NAME_LAENGE], int* mengen, int* anzahl) {
    char name[NAME_LAENGE];
    int menge;

    cout << "\nArtikelname: ";
    cin.getline(name, NAME_LAENGE);
    cout << "Anzahl: ";
    cin >> menge;
    cin.ignore(10000, '\n');

    if (menge < 0) {
        cout << "Die Anzahl darf nicht negativ sein." << endl;
        return;
    }

    int index = findeArtikel(namen, *anzahl, name);
    if (index >= 0) {
        // Artikel gibt es schon: Menge erhoehen
        *(mengen + index) += menge;
        cout << "Artikel vorhanden, neue Anzahl: " << *(mengen + index) << endl;
    } else if (*anzahl >= MAX_ARTIKEL) {
        cout << "Das Inventar ist voll." << endl;
    } else {
        strcpy(namen[*anzahl], name);
        *(mengen + *anzahl) = menge;
        (*anzahl)++;
        cout << "Artikel hinzugefuegt." << endl;
    }
}

void inventarAnzeigen(const char namen[][NAME_LAENGE], const int* mengen, int anzahl) {
    cout << "\n--- Aktuelles Inventar ---" << endl;
    if (anzahl == 0) {
        cout << "Das Inventar ist leer." << endl;
        return;
    }
    for (int i = 0; i < anzahl; i++) {
        cout << i + 1 << ". " << namen[i] << " - Anzahl: " << *(mengen + i) << endl;
    }
}

void artikelSuchen(const char namen[][NAME_LAENGE], const int* mengen, int anzahl) {
    char name[NAME_LAENGE];
    cout << "\nGesuchter Artikel: ";
    cin.getline(name, NAME_LAENGE);

    int index = findeArtikel(namen, anzahl, name);
    if (index >= 0) {
        cout << name << " ist auf Lager, Anzahl: " << *(mengen + index) << endl;
    } else {
        cout << "Artikel nicht gefunden." << endl;
    }
}

void artikelLoeschen(char namen[][NAME_LAENGE], int* mengen, int* anzahl) {
    char name[NAME_LAENGE];
    cout << "\nZu loeschender Artikel: ";
    cin.getline(name, NAME_LAENGE);

    int index = findeArtikel(namen, *anzahl, name);
    if (index < 0) {
        cout << "Artikel nicht gefunden." << endl;
        return;
    }

    // Alle folgenden Artikel um eine Position nach vorne schieben
    for (int i = index; i < *anzahl - 1; i++) {
        strcpy(namen[i], namen[i + 1]);
        *(mengen + i) = *(mengen + i + 1);
    }
    (*anzahl)--;
    cout << "Artikel geloescht." << endl;
}

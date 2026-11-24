// ***************************************************
// Projekt:      Statische Variable
// Author:       Gresa Hisa
// Datum:        23.11.2026
// Programmname: Static.cpp
// ***************************************************

#include <iostream>
using namespace std;

void hallo();

int main() {
	int x = 0;
	for (int i = 1; i <= 5; i++) {

		hallo();
	}
}

void hallo() {
	static int x = 0;
	x++;
	cout << "X:  " << x << endl;
}

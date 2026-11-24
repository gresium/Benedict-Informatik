// ***************************************************
// Projekt:      Array_3D_Cube
// Author:       Gresa Hisa
// Datum:        25.11.2026
// Programmname: cube.cpp
// ***************************************************

#include <iostream>

using namespace std;

int main() {
	int cube[2][2][2];
	int zaehler = 0;

	for (int x = 0; x < 2; x++) {
		for (int y = 0; y < 2; y++) {
			for (int z = 0; z < 2; z++) {
				cube[x][y][z] = zaehler;
				zaehler++;
			}
		}
	}

	for (int x = 0; x < 2; x++) {
		for (int y = 0; y < 2; y++) {
			for (int z = 0; z < 2; z++) {
				cout << "cube[" << x << "][" << y << "][" << z << "] = " << cube[x][y][z] << endl;
			}
		}
	}
	return 0;
}

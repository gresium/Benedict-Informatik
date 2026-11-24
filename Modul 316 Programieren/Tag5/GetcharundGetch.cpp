// ***************************************************
// Projekt:      Getchar und Getch
// Author:       Gresa Hisa
// Datum:        18.11.2026
// Programmname: GetcharundGetch.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>
#include <conio.h>
// Die conio.h kommt von C und ist auch in C++ verwendbar.

using namespace std;

int main()
{
  char c;
  cout << "Gebe ein Zeichen ein. Druecke die Enter-Taste: ";
  
  c = getchar();
  cout << "\n\nDas ist dein Zeichen mit getchar(): " << c << "\n\n";
  
  cout << "Gebe ein zweites Zeichen ein ohne die Enter-Taste: ";
  
  c = getch();
  cout << "\n\nDas ist dein zweites Zeichen mit getch(): " << c << "\n\n";
  
  cout << "ENTER-Taste = Tschuess!\n\n";
  
  fflush(stdin);	// Der Tastaturpuffer wird hier gelöscht.
  getchar();		// Das Programm wartet auf eine Taste.
  return 0;
}

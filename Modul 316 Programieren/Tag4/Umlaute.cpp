// ***************************************************
// Projekt:      Umlaute
// Author:       Gresa Hisa
// Datum:        17.11.2026
// Programmname: Umlaute.cpp
// ***************************************************

#include <iostream>
#include <cstdio>
#include <windows.h>

using namespace std;

int main()
{
char input;
  // Windows code page 1250 / 1252 oder 28591 entspricht ISO-Latin-1
  SetConsoleOutputCP (1250);
  SetConsoleCP (1250);
  // system("chcp 1250"); Wäre auch möglich aber es gibt eine Ausgabe.
  cout << endl << " Ausgabe von Umlauten unter C++:";
  cout << endl << " Und jetzt geht es: ä ö ü Ä Ü Ö ß €" << endl << endl;
  do
  {
     cout << " Ihr Zeichen (0=Ende) >";
     cin >> input;
     cout << " " << input << endl;
  }while(input != '0');

return 0;
}

// ***************************************************
// Projekt:      Mausposi
// Author:       Gresa Hisa
// Datum:        22.11.2026
// Programmname: Mausposi.cpp
// ***************************************************
#include <windows.h>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() 
{ 
  POINT mPos; 

  while(1) 
  { 
    GetCursorPos(&mPos); 
    cout << "X:" << mPos.x << "  Y:" << mPos.y << endl; 
    system("CLS"); 
  } 
system("PAUSE");
return 0;
}

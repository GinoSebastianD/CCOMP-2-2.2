#include <iostream>
using namespace std;
int main() 
{
  int edad;
  int frm1;
  int frm2;
  int frm3;
  int frm4;

  cout << "Ingrese su edad por favor: ";
  cin >> edad;

  cout << "\nFormula de Tanaka 2001:\n";
  frm1 = 220 - edad;
  cout << "La frecuencia cardiaca del usuario es de: " << frm1 << std::endl;
  
  cout << "\nFormula opcional:\n";
  frm2 = 208 - (0.7*edad);
  cout << "La frecuencia cardiaca del usuario es de: " << frm2 << std::endl;

  cout << "\nFormula de Gellish 2007:\n";
  frm3 = 207 -(0.7*edad);
  cout << "La frecuencia cardiaca del usuario es de: " << frm3 << std::endl;

  cout << "\nFormula de Nes et 2012:\n";
  frm4 = 211 -(0.64*edad);
  cout << "La frecuencia cardiaca del usuario es de: " << frm4 << std::endl;

  
  return 0;
}

#include <iostream>
#include "3.14.h"
using namespace std;
int main() {
  cout<<"ingrese los valores: ";
  unsigned int valores;
  cin>>valores;
  cout<<"ingrese el nombre: ";
  string nombre;
  cin>>nombre;
  cout<<"ingrese el apellido: ";
  string apellidos;
  cin>>apellidos;
  cout<<"ingrese el saldo: ";
  double saldo;
  cin>>saldo;

  cuenta cuenta{valores,nombre,apellidos,saldo};

  cout<<"el valor es "<<cuenta.getva()<<endl;
  cout<<"el nombre es "<<cuenta.getno()<<endl;
  cout<<"el apellido es "<<cuenta.getapel()<<endl;
  cout<<"el saldo es "<<cuenta.getsal()<<endl;
}
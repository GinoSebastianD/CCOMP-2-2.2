#include <iostream>
#include "3.14.h"
using namespace std;
int main() {


  cuenta cuenta{5,"Gino","Diaz",56};

  cout<<"El valor es "<<cuenta.getva()<<endl;
  cout<<"El nombre es "<<cuenta.getno()<<endl;
  cout<<"El apellido es "<<cuenta.getapel()<<endl;
  cout<<"El saldo es "<<cuenta.getsal()<<endl;
}

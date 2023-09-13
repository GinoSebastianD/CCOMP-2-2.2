#include <iostream>
#include "3.13.h"
using namespace std;
int main(){
    Cuenta cuenta1{"Jane Green", 50};
    Cuenta cuenta2{"John Blue", 0};

    cout << "Cuenta 1: " << cuenta1.obtener_nombre() << " el saldo es  $" << cuenta1.obtener_saldo() << endl;
    cout << "Cuenta 2: " << cuenta2.obtener_nombre() << " el saldo es $" << cuenta2.obtener_saldo();

    int depositAmount;
    cout << "\n\nIntroducir el importe del depósito a la cuenta1: ";
    cin >> depositAmount;
    cout << "añadiendo $" << depositAmount << " a la cuenta1 saldo $";
    cuenta1.deposito(depositAmount);

    cout << "\n\nCuenta1: " << cuenta1.obtener_nombre() << " el saldo es  $"<< cuenta1.obtener_saldo();
    cout << "\nCuenta2: " << cuenta2.obtener_nombre() << " el saldo es  $" << cuenta2.obtener_saldo();

    cout << "\n\nIntroducir el importe del depósito a la cuenta2: ";
    cin >> depositAmount;
    cout << "añadiendo $" << depositAmount << " a la cuenta2 saldo $";
    cuenta2.deposito(depositAmount);

    cout << "\n\nCuenta1: " << cuenta1.obtener_nombre() << " el saldo es  $" << cuenta1.obtener_saldo(); 
    cout << "\nCuenta2: " << cuenta2.obtener_nombre() << " el saldo es  $" << cuenta2.obtener_saldo() <<endl;

  cuenta1.imprimir_informacion();
  cuenta2.imprimir_informacion();
}
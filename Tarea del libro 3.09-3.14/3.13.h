#include <string>
#include <iostream>
class Cuenta 
{
public:
    Cuenta(std::string nombre_cuenta, int saldo_inicial)
        : nombre{nombre_cuenta} {

        if (saldo_inicial > 0) {
            saldo = saldo_inicial;
        }
    
    }
    void deposito (int deposito_importe) {
        if (deposito_importe > 0) {
            saldo = saldo + deposito_importe;
        }
    }

    int obtener_saldo() const {
        return saldo;
    }

    void poner_nombre(std::string nombre_cuenta) {
        nombre = nombre_cuenta;
    }

    std::string obtener_nombre() const {
        return nombre;
    }
    void imprimir_informacion() const {
        std::cout << "Nombre de la cuenta: " << nombre <<std::endl;
        std::cout << "Saldo actual: " << saldo <<        std::endl;
    }
private:
    std::string nombre;
    int saldo{0};
};
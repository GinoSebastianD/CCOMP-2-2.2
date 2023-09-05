#include <iostream>

int main() {
    int numero1, numero2, numero3;

    // Leemos tres n�meros enteros
    std::cout << "Ingrese el primer n�mero entero: ";
    std::cin >> numero1;

    std::cout << "Ingrese el segundo n�mero entero: ";
    std::cin >> numero2;

    std::cout << "Ingrese el tercer n�mero entero: ";
    std::cin >> numero3;

    // Comprobamos si el primer n�mero es un factor del segundo
    bool esFactor = (numero2 % numero1 == 0);

    // Comprobamos si el segundo n�mero es un factor del tercero
    bool esFactor2 = (numero3 % numero2 == 0);

    // Imprimimos los resultados
    std::cout << "El primer n�mero es factor del segundo: " << (esFactor ? "S�" : "No") << std::endl;
    std::cout << "El segundo n�mero es factor del tercero: " << (esFactor2 ? "S�" : "No") << std::endl;

    return 0;
}


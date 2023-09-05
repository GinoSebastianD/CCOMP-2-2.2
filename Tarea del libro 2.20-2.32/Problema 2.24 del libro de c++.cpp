#include <iostream>

int main() {
    int numero1, numero2, numero3;

    // Leemos tres números enteros
    std::cout << "Ingrese el primer número entero: ";
    std::cin >> numero1;

    std::cout << "Ingrese el segundo número entero: ";
    std::cin >> numero2;

    std::cout << "Ingrese el tercer número entero: ";
    std::cin >> numero3;

    // Comprobamos si el primer número es un factor del segundo
    bool esFactor = (numero2 % numero1 == 0);

    // Comprobamos si el segundo número es un factor del tercero
    bool esFactor2 = (numero3 % numero2 == 0);

    // Imprimimos los resultados
    std::cout << "El primer número es factor del segundo: " << (esFactor ? "Sí" : "No") << std::endl;
    std::cout << "El segundo número es factor del tercero: " << (esFactor2 ? "Sí" : "No") << std::endl;

    return 0;
}


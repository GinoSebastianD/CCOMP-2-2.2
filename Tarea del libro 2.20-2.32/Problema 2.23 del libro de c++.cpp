#include <iostream>

int main() {
    int numero, numero_mas_grande, numero_mas_pequeno;

    
    std::cout << "Ingrese el primer numero: ";
    std::cin >> numero;
    numero_mas_grande = numero;
    numero_mas_pequeno = numero;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> numero;
    if (numero > numero_mas_grande) {
        numero_mas_grande = numero;
    }
    if (numero < numero_mas_pequeno) {
        numero_mas_pequeno = numero;
    }

    std::cout << "Ingrese el tercer numero:  ";
    std::cin >> numero;
    if (numero > numero_mas_grande) {
        numero_mas_grande = numero;
    }
    if (numero < numero_mas_pequeno) {
        numero_mas_pequeno = numero;
    }

    std::cout << "Ingrese el cuarto numero: ";
    std::cin >> numero;
    if (numero > numero_mas_grande) {
        numero_mas_grande = numero;
    }
    if (numero < numero_mas_pequeno) {
        numero_mas_pequeno = numero;
    }

    std::cout << "Ingrese el 5to numero:  ";
    std::cin >> numero;
    if (numero > numero_mas_grande) {
        numero_mas_grande = numero;
    }
    if (numero < numero_mas_pequeno) {
        numero_mas_pequeno = numero;
    }

    std::cout << "El número más grande es: " << numero_mas_grande << std::endl;
    std::cout << "El número más pequeño es: " << numero_mas_pequeno << std::endl;

    return 0;
}


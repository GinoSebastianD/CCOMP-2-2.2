#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Cuantos numeros Perfectos quiere encontrar? : ";
    cin >> n;
    int numero = 2; 
    int encuentra = 0;
    while (encuentra < n) {
        int suma = 1; 
        int i = 2;
        while (i <= numero / 2) { 
            if (numero % i == 0) {
                suma += i; 
            }
            i++;
        }
        if (suma == numero) {
            cout << "Los perfectos son: " << numero<< endl ;
            encuentra++;
        }
        numero++; 
    }
}

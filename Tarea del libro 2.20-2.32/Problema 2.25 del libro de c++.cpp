#include <iostream>
using namespace std;
int main() {
    int numero1, numero2, numero3;

    // Leemos tres números enteros
    cout << "Ingrese el primer número entero: ";
    cin >> numero1;

    cout << "Ingrese el segundo número entero: ";
    cin >> numero2;

    cout << "Ingrese el tercer número entero: ";
    cin >> numero3;
    
    if ((numero2%numero1)==0)
    {
        cout<<"El primer numero si es factor del segundo numero" <<endl;
    }
    else
    {
    	cout<<"El primer numero NO es factor del segundo numero"<<endl;
    }
    if ((numero3%numero2)==0)
   {
   	    cout<<"El segundo numero si es factor del segundo numero"<<endl;
   }
   else
    {
    	cout<<"El segundo numero NO es factor del segundo numero"<<endl;
    }
    


    return 0;
}


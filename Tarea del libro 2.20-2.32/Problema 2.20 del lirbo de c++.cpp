/*(Di�metro, Circunferencia y �rea de un C�rculo) Escriba un programa que lea en el radio de
un c�rculo como un n�mero entero e imprime el di�metro, la circunferencia y el �rea del c�rculo. Usa el valor constante
3,14159 para pi. Haga todos los c�lculos en las declaraciones de salida. */
#include <iostream>
using namespace std;

int main()
{
	int radio;
	const double pi{3.14159};
	cout <<" Introduce el radio del circulo" ;
	cin >> radio;
	
	int diametro= radio*2;
	int circunferencia = 2*pi*radio;
	int area = pi*radio*radio;
	
	cout << "el diametro es:" << diametro << endl;
	cout <<"la circunferencia es: " << circunferencia << endl;
	cout << "el area es" << area << endl;
	
}





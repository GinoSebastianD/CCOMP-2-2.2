#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
	cout << "Ingrese  el primer numero: " ;
	cin>> a;
	
	
	if((a%2)!=0)
	{
		cout <<  "Es un numero impar: " << a << endl ;
	}
	else
	{
		cout <<  "Es un numero par: " << a << endl ;
	}
	
	cout<< "Ingrese el segundo numero ";
	cin >> b;
	
	if((b%2)!=0)
	{
		cout <<"Es un numero impar: " << b <<endl ;
	}
	
	
	int c = a+b;
	if ((c%2)!=0)
	{
		cout<<"La suma de los numeros da un numero impar: " << c << endl ;
	}
	else
	{
	    cout<<"La suma de los numeros da un numero par: " << c << endl ;

	}
	return 0;
}

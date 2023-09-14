#include<iostream>
using namespace std;
int main(){
	int n;
	cout << "Cuantos numeros de la secuencia de fibonacci desea?: ";
	
	cin>> n ;
	int num1=1;
	
	int num2=1;
	
	cout<< " " << num1;
	cout <<" " << num2;
	
	for(int i=3; i<=n;i++)
	
	{
	 int num3= num1 + num2;
	  cout<< " " << num3;
	  num1 = num2;
	  num2 = num3;
	}
	
	}
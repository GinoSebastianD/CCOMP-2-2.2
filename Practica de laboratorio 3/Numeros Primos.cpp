#include<iostream>
using namespace std;
int main(){
	int n=0;
	cout<< "Ingrese un numero: ";
	cin>> n;
	
	if (n<2){
		cout<<"No tiene primos";
	}
	else{
		while(n>=2){
			int temp=n-1;
			int contador=0;
			while(temp>=2)
			{
				if ((n%temp)==0){
					contador++;
				} 
				if (contador > 0){
					break;
				}
				temp--;
			}
			
			if ( contador == 0)
		{
		  cout << "Primo es = " << n <<endl;
		}
		n--;
		
		}
		
	}
}

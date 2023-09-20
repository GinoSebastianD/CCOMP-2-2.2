#include <iostream>
using namespace std;
int main() {
  int n;
  cout<< "ingrese un numero : ";
  cin >> n;
  int suma=0;
  for(int i=1; i<n;i++){
    if ((i%3)==0  || (i%5)==0){
      suma=suma+i;
    }
    
  }
  cout << "la suma es: "<< suma;
}
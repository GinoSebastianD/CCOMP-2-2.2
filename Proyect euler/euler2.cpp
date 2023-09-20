#include <iostream>
using namespace std;

long long sumafib(int a)
{
  int n=1;
  int m=2;
  int suma=0;

  while (n<a){
    if ((n%2)==0)
  {
    suma=suma+n;
  }
  int x=n+m;
  n=m;
  m=x;
    
  }
  return suma;
}


int main() {
  cout<< "la suma es: "<< sumafib(4000000);
}
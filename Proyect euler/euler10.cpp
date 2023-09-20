#include <iostream>
using namespace std;

bool  primo(long long x){
  long long cont=2;
  for (long long i=2; i<=2000000; i++){
    if (x%i==0){
      return false;
    }
  }
  return true;
}






int main() {
  long long sum=0;
  for(long long y=2; y<= 2000000;y++){
    if(primo(y)){
      sum=sum + y;
    }
    
  }
  cout <<sum;
}
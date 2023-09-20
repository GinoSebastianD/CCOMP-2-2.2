#include <iostream>
using namespace std;
int main(){
  long long int x=600851475143;
  int corredor=2;
  while (x>1){
    if( (x%corredor) == 0){
      x=x/corredor;
    }
    else{
      corredor++;
    }
  }

  cout<<"es: "<<corredor;
}
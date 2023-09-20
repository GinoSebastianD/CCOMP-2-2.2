#include <iostream>
using namespace std;
int main() {
  int x=0;
  int y=0;
  long long resta;
  for(int i=1 ; i<=100;i++){
     x= x+(i*i);
     y= y+i;
  }
  resta= (y*y)-x;
  cout<< resta;
  


}
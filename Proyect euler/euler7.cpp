#include <iostream>
using namespace std;

int main()
{
    long long num = 99;

    // Initialize with 2, the first prime number
    
    for (int x=2 ; x<num ; x++){
      if (num%x==0){
        num = num/x;
        
      }
      
    }

    cout << "El mayor numero primo de: " << num;
    return 0;
}


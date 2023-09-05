#include <iostream>

int main() {
  int n;
  std::cout << "Ingrese un número por favor: ";
  std::cin >> n;
   if (n>=1000)
    {
 	 std::cout << n%10 << "  " << (n/10)%10 << "  " << (n/100)%10 << "  " << (n/1000)%10 << std::endl;
     }
     

  return 0;
}

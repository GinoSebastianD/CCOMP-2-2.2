/*Cada nuevo término en la sucesión de Fibonacci se genera sumando los dos términos anteriores. 
Al comenzar con 1 y 2, los primeros 10 términos serán:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
Al considerar los términos en la sucesión de Fibonacci cuyos valores no superan los cuatro millones, 
encuentre la suma de los términos de valor par.
*/



#include <iostream>

    int fibonacci (int n) {
        if (n==0 || n==1){
            return 1;
        } else {
            return fibonacci(n-2)+fibonacci(n-1);
        }
    }

    int main (){
        int num = 4000000;
        int counter = 1;
        int sum = 0;
        while (fibonacci(counter)<num){
            if (fibonacci(counter)%2==0){
                sum+=fibonacci(counter);
            }
            ++counter;
        }
        
        std::cout << sum;
        return 0;
    }

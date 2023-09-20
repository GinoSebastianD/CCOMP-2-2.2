#include <iostream>
using namespace std;
long long maximmo( long long a,  long long b)
{
    while(a!= 0)
    {
        long long z = b;
        a = b % a;
        b = z;
    }
    return b; 
}

 long long minimo( long long x,  long long y)
    {
        return x * (y / (maximmo_divisor(x,y)));
    }

int main()
{
     long long resultado{1};

    for(int i = 2; i <= 20; ++i)
    {
        resultado = minimo(resultado,i);
    }

    cout << "El menor número que es divisible entre 1 a 20 es: "<< resultado << endl;
    return 0;
}

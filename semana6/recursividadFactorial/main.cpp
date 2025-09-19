#include <iostream>

using namespace std;

/**
* Recursividad: Cuando una función se llama a sí misma.
*
*   n! = n * (n-1)!
*   5! = 5 * (4)!
              4 * (3)!
                    3 * (2)!
                         2 * (1)!
                              1 * (0)!
                                   1
*
*/
long long factorial(long n) {
    /**
    * Primero se define el CASO BASE
    * posteriormente, se define el PASO RECURSIVO.
    */
    if( n == 1 )
        return 1;
    else
        return n * factorial(n-1);
}

/**
* Fibonacci
* fib(n) = fib(n-1) + fib(n-2)
*      fib(0) = 1
*      fib(1) = 1

*   1 1 2 3 5 8 13 21 34...
*/
long long fibonacci(long n){
    if(n == 1 || n == 0)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

long contarDigitos(long n) {
    if(n < 10)
        return 1;
    else
        return 1 + contarDigitos(n/10);
}



int main()
{
    cout << factorial(5) << endl;
    cout << fibonacci(8) << endl;
    cout << contarDigitos(854) << endl;
    return 0;
}

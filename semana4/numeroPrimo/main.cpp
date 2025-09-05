#include <iostream>

using namespace std;

int main()
{
    /**
    * Implemente un programa que solicite un numero por teclado
    * e indique si dicho numero es un "numero primo".
    */
    long long n, i = 2, d = 0;

    while( i*i <= n ){
        if( n%i == 0){
            d++;
            break;
        }
        i++;
    }
    cout<<( (d == 0) ? "primo" : "no primo" );

    return 0;
}

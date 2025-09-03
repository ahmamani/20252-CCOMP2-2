#include <iostream>

using namespace std;

int main()
{
    /**
    * Implemente un programa que solicite un numero por teclado
    * e indique si dicho numero es un "numero primo".
    */
    long long n, i=1, d=0;
    cin >> n;
    while( i <= n ){
        if( n%i == 0){
            d++;
        }
        i++;
    }
    cout<<( (d == 2) ? "primo" : "no primo" );

    /**
    * Implemente un program que solicite un numero por teclado
    * e imprima los numero primos menores que dicho numero.
    */
    /**
    * TODO
    */


    return 0;
}

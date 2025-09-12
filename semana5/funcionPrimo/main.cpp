#include <iostream>

using namespace std;

/**
 * Implemente una función que determine si un número es primo
 * no lo es.
 */
bool esPrimo(int n) {
    for(int i = 2; i*i <= n; i++ ){
        if( n % i == 0 ) {
            return false;
        }
    }
    return true;
}

void imprimirNPrimos(int n) {
    int i = 2;
    while (i < n){
        if(esPrimo(i))
            cout << i << " ";
        i++;
    }
    cout << endl;
}

/**
* Implemente una función que reciba un entero y retorne el numero de
* digitos que tiene dicho entero.
*/
int obtenerNroDigitos(long long n) {
    int x=0;
    while (n>0){
        n=n/10;
        x++;
    }
    return x;
}

int main()
{
    cout<< obtenerNroDigitos(147);
    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    /**
    * Escribir un programa que pida un numero (3 a 9 digitos)
    * y evalue si dicho numero es un palindromo.
    * Ejm
            13331   -> es palindromo
            2133214 -> no es palindromo
            31311313-> es palindromo
    */
    long n;
    cout << "Ingrese un numero: ";
    cin >> n;

    int numC = n;
    int numDigits = 0;
    while(numC > 0) {
        numC /= 10;
        numDigits++;
    }

    while( n != 0 ){
        int ini = n / pow(10, numDigits-1);
        int fin = n % 10;
        if(ini != fin){
            cout << "NO ES PALINDROMO" << endl;
            break;
        }
        n = (n % static_cast<int>(pow(10, numDigits-1))) / 10;
        numDigits-=2;
        cout << ini << endl;
        cout << fin << endl;
        cout << n << endl;
    }



    return 0;
}

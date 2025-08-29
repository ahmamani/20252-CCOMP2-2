#include <iostream>

using namespace std;

int main()
{
    /**
    * CONDICIONAL IF
    *
        if (CONDICION) {
            // SENTENCIA A. se ejecuta si la condición es verdadera.
        } else {
            // SENTENCIA B. se ejecuta si la condición  es falsa.
        }
    * OPERADORES DE COMPARACIÓN
        > mayor que
        < menor que
        >=  mayor o igual que
        <=  menor o igual que
        ==  identico a
        !=  diferente a
    * OPERADORES LOGICOS
        && - and
        || - or
        !  - negación
        Ejm a = 10, b = 5
                (a > 5) -> true
                (a < 3) -> false
                (a == 8) -> false
                (a != 5) -> true
                (a >= 10 && b < 10) -> true
                (a < 6 || b == 5) -> true
    */
    int a = 2;
    int b = 5;

    if(a > 5) {
        cout << "El numero " << a << " es mayor que 5" << endl;
    }

    return 0;
}

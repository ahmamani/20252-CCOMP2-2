#include <iostream>

using namespace std;

/**
* PUNTEROS
* ========
* Es una variable de almacena DIRECCIONES DE MEMORIA de otra variable
* del mismo tipo.
*
*   Declaraci�n de puntero
*       TIPO_DE_DATO* NOMBRE_DEL_PUNTERO
*
* OPERADOR DE DIRECCI�N (&)
*   Sirve para obtener la direcci�n de memoria de una variable/objeto.
*   Operador unario. Ejm &var --> retorna la direcci�n de la variable var.
*
* OPERADOR DE INDIRECCI�N (*)
*   Sirve para obtener el valor de una direcci�n de memoria.
*   Operador unario. Ejm *ptr --> retorna el valor de la direccion de memoria
                                    que tiene ptr.
*
*/
int main()
{
    int* ptr1; // declarando la variable de tipo puntero a entero

    int x; // declarando la variable x
    x = 10; // inicializando la variable x con el valor 10

    ptr1 = &x;

    cout << "Direcci�n de la variable x es: " << &x << endl;
    cout << "Direcci�n de la variable x es: " << ptr1 << endl;
    cout << "El valor de la direcci�n de la variable ptr es: " << *ptr1 << endl;

    int y = 20;
    ptr1 = &y;
    cout << "Direcci�n de la variable y es: " << ptr1 << endl;
    cout << "El valor de la direcci�n de la variable ptr es: " << *ptr1 << endl;

    int z = 100;
    ptr1 = &z;
    cout << "Direcci�n de la variable z es: " << ptr1 << endl;
    cout << "El valor de la direcci�n de la variable ptr es: " << *ptr1 << endl;

    int* ptr2;
    ptr2 = &z;

    if(ptr1 == ptr2) {
        cout << "ptr1 y ptr2 tienen el mismo valor" << endl;
    }

    return 0;
}

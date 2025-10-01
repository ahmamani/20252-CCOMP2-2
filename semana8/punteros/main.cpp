#include <iostream>

using namespace std;

/**
* PUNTEROS
* ========
* Es una variable de almacena DIRECCIONES DE MEMORIA de otra variable
* del mismo tipo.
*
*   Declaración de puntero
*       TIPO_DE_DATO* NOMBRE_DEL_PUNTERO
*
* OPERADOR DE DIRECCIÓN (&)
*   Sirve para obtener la dirección de memoria de una variable/objeto.
*   Operador unario. Ejm &var --> retorna la dirección de la variable var.
*
* OPERADOR DE INDIRECCIÓN (*)
*   Sirve para obtener el valor de una dirección de memoria.
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

    cout << "Dirección de la variable x es: " << &x << endl;
    cout << "Dirección de la variable x es: " << ptr1 << endl;
    cout << "El valor de la dirección de la variable ptr es: " << *ptr1 << endl;

    int y = 20;
    ptr1 = &y;
    cout << "Dirección de la variable y es: " << ptr1 << endl;
    cout << "El valor de la dirección de la variable ptr es: " << *ptr1 << endl;

    int z = 100;
    ptr1 = &z;
    cout << "Dirección de la variable z es: " << ptr1 << endl;
    cout << "El valor de la dirección de la variable ptr es: " << *ptr1 << endl;

    int* ptr2;
    ptr2 = &z;

    if(ptr1 == ptr2) {
        cout << "ptr1 y ptr2 tienen el mismo valor" << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

/**
* OPERADOR new
*   sirve para reservar memoria para una variable/objeto.
*
* OPERADOR delete
*   sirve para liberar la memoria de una variable/objeto.
*/

int* fun() {
    int *ptr = new int;
    *ptr = 10;
    return ptr;
}

int main()
{
    int *ptr = fun();
    cout << *ptr << endl;

    delete ptr;

    /*int* ptr;
    if(true){
        int x = 10;
        ptr = &x;
    }
    cout << *ptr << endl;
*/
    return 0;
}

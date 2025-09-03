#include <iostream>

using namespace std;

int main()
{
    int num; // declarando el numero
    cout << "Ingrese un numero de 4 digitos, porfa: ";
    cin >> num; // asignamos el valor ingresado por teclado

    cout << "\n\nEl numero ingresado es: " << num << endl;

    // 3254
    cout << num / 1000 << endl; // 3
    cout << ( num % 1000) / 100 << endl;  // 2
    cout << ( num  % 100) / 10 << endl; // 5
    cout << num % 10 << endl;  // 4
    return 0;
}

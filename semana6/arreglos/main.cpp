#include <iostream>

using namespace std;

/**
* Implemente una funcion que reciba un arreglo de enteros
* y su tamaño y retorne la suma de los elementos del arreglo.
*/
long sumar(int arr[], int tam) {
    int sum = 0;
    for(int i = 0; i < tam; i++)
        sum = sum + arr[i];
    return sum;
}

int main()
{
    int arr[5];

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;
    cout << "la suma es: " << sumar(arr, 5) << endl;

    return 0;
}

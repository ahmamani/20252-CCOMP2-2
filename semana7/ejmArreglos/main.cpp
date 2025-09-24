#include <iostream>

using namespace std;

/**
* Implemente una función para invertir
* los elementos de un arreglo.
*/
void intercambio(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void invertir(int arr[], int tam) {
    for(int i = 0, j = tam-1; i < j; i++, j--) {
        intercambio(arr[i], arr[j]);
    }
}

void invertirR(int arr[], int tam, int i = 0) {
    if(i > tam){
        return;
    } else {
        intercambio(arr[i], arr[tam-1]);
        invertirR(arr, tam-1, i+1);
    }
}

void print(int arr[], int tam) {
    cout << "[ ";
    for(int i = 0; i < tam; i++)
        cout << arr[i] << " ";
    cout << "]";
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    print(arr, 5);  // [ 10 20 30 40 50 ]
    invertir(arr, 5);
    cout << endl;
    print(arr, 5);  // [ 50 40 30 20 10 ]
    invertirR(arr, 5);
    cout << endl;
    print(arr, 5);  // [ 10 20 30 40 50 ]
    return 0;
}

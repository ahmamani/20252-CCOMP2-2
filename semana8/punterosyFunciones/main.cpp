#include <iostream>

using namespace std;

void printArray(int *arr, int size){
    cout << "[ ";
    for(int i = 0; i < size; i++, arr++)
        cout << *arr << " ";
    cout << "]" << endl;
}

void intercambio(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
/**
* Implemente una función para invertir los
* elementos de un arreglo.
*/
void invertirArrayIt(int *ini, int* fin){
    while(ini<fin){
        intercambio(ini++, fin--);
    }
}

void invertirArrayRe(int *ini, int* fin){
    if(ini>=fin)
        return;
    intercambio(ini, fin);
    invertirArrayRe(++ini, --fin);
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int tam = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, tam);
    cout << "-----------------" << endl;
    int x = 10;
    int y = 20;
    intercambio(&x, &y);
    cout << "x = " << x << endl; // 20
    cout << "y = " << y << endl; // 10
    cout << "-----------------" << endl;
    invertirArrayIt(arr, arr+tam-1);
    printArray(arr, tam);
    invertirArrayRe(arr, arr+tam-1);
    printArray(arr, tam);
    return 0;
}

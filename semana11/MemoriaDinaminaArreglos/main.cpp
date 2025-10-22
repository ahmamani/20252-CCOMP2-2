#include <iostream>

using namespace std;

int sumArrayIt(int *ptr, int tam) {
    int sum = 0;
    for(int i = 0; i < tam; sum+=ptr[i++]);
    return sum;
}

int sumArrayRec(int *ptr, int tam) {
    if(tam == 0){
        return 0;
    }
    return *ptr + sumArrayRec(++ptr, --tam);
}

void intercambio(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

/**
* Implementar un algoritmo de ordenamiento Burbujita
*/
void bubblesort(int *ptr, int tam) {
    for(int i = 0; i < tam-1; i++){
        for(int j = 0; j < tam-i-1; j++){
            if(ptr[j] > ptr[j+1]){
                intercambio(ptr[j],ptr[j+1]);
            }
        }
    }
}

int main()
{
    int tam = 5;
    int *ptr = new int[tam];
    for(int i = 0; i < tam; i++)
        ptr[i] = tam-i;

    for(int i = 0; i < tam; i++)
        cout << ptr[i] << " ";

    cout << "\nLa suma It es: " << sumArrayIt(ptr, tam);
    cout << "\nLa suma Rec es: " << sumArrayRec(ptr, tam);
    bubblesort(ptr, tam);
    cout << "\n\n Ordenamiento \n";
    for(int i = 0; i < tam; i++)
        cout << ptr[i] << " ";

    delete[] ptr;
    return 0;
}

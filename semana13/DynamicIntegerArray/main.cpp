#include <iostream>
#include "DynamicIntegerArray.h"

using namespace std;

int main()
{
    DynamicIntegerArray dia;
    cout << dia.getSize() << endl;
    dia.print();
    cout << endl;
    int arr[] = {1,2,32,43,4};
    DynamicIntegerArray dia2(arr, 5);
    cout << dia2.getSize() << endl;
    dia2.print();
    cout << endl;

    dia2.push_back(10);
    dia2.print();
    cout << endl;

    dia2.insert(100, 3);
    dia2.print();
    cout << endl;
    return 0;
}

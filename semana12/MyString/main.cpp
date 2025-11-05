#include <iostream>
#include "MyString.h"

using namespace std;

int main()
{
    MyString ms("CIENCIA DE LA COMPUTACION");

    cout << ms.getSize() << endl;
    cout << ms.getData() << endl;
    ms.toLower();
    cout << ms.getData() << endl;
    ms.toUpper();
    cout << ms.getData() << endl;
    return 0;
}

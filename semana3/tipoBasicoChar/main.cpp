#include <iostream>

using namespace std;

int main()
{
    // para caracter se usan comillas simples
    char car = '6';

    int val = static_cast<int>(car);
    cout << sizeof(car) << endl;

    int result = val - '0';
    cout << "El valor entero es: " << val << endl;
    cout << result << endl;
    return 0;
}

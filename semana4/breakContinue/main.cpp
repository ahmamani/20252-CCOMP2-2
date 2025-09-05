#include <iostream>

using namespace std;

int main()
{
    /**
    *   break: rompe el bucle *
    */
    int i = 1;
    cout << "Probando la sentencia 'break'" << endl;
    while (i < 10) {
        if(i == 5)
            break;
        cout << i << endl;
        i = i + 1;
    }
    /**
    *   continue: salta a la siguiente iteración *
    */
    i = 0;
    cout << "\n\nProbando la sentencia 'continue'" << endl;
    while (i < 10) {
        i = i + 1;
        if(i == 5)
            continue;
        cout << i << endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    string cad;// = "Ciencia de la computacion";

    /**
    * contar la cantidad de i's que tiene dicha cadena
    */
    cout << "Ingrese una cadena: ";
    getline(cin, cad);
    char car;
    cout << "Ingrese un caracter: ";
    cin >> car;

    int cont = 0;
    for(int i = 0; i < cad.length(); i++) {
        if (cad.at(i) == car)
            cont++;
    }

    cout << cont << endl;
    return 0;
}

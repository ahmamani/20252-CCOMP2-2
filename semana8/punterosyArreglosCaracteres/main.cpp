#include <iostream>

using namespace std;

int contarCarac(char *ptr, int car){
    int cont = 0;
    while(*ptr != '\0'){
        if(*ptr == car)
            cont++;
        ptr++;
    }
    return cont;
}

int main()
{
    char cad[] = "ciencia de la computacion";
    cout << contarCarac(cad, 'e'); // 2
    return 0;
}

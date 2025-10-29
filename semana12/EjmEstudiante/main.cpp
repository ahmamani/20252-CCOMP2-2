#include <iostream>
#include "Estudiante.h"

using namespace std;

int main()
{
    Estudiante e1("Luis", 18);
    e1.print();

    Estudiante *e2 = new Estudiante("Jose", 19);
    e2->print();
    return 0;
}

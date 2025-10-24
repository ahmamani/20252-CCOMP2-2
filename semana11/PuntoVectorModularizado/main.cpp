#include <iostream>
#include "Punto.h"
#include "VectorGeometrico.h"

using namespace std;

int main()
{
    Punto p1;
    Punto p2(3, 4);

    p1.print();
    p2.print();

    VectorGeometrico vg(p1, p2);
    vg.print();
    cout << "\n El modulo es: " << vg.modulo() << endl;
    return 0;
}

#include "Punto.h"

Punto::Punto()
{
    x = 0;
    y = 0;
}

Punto::Punto(int _x, int _y) {
    x = _x;
    y = _y;
}

int Punto::getX() const {
    return x;
}

int Punto::getY() const {
    return y;
}

void Punto::print() const {
    std::cout << "(" << x << ", " << y << ")";
}

void Punto::modificar(int _x, int _y){
    x = _x;
    y = _y;
}

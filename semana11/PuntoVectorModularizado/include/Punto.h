#ifndef PUNTO_H
#define PUNTO_H

#include <iostream>

class Punto
{
    public:
        Punto();
        Punto(int _x, int _y);
        int getX() const;
        int getY() const;
        void print() const;
        void modificar(int _x, int _y);

    private:
        int x;
        int y;
};

#endif // PUNTO_H

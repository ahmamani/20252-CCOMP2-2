#ifndef VECTORGEOMETRICO_H
#define VECTORGEOMETRICO_H

#include <cmath>
#include "Punto.h"

class VectorGeometrico
{
    public:
        VectorGeometrico(Punto p1, Punto p2);
        void print() const ;
        float modulo() const;

    private:
        Punto ini;
        Punto fin;
};

#endif // VECTORGEOMETRICO_H

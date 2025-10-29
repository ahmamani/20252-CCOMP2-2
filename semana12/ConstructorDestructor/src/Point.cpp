#include "Point.h"

Point::Point()
{
    x = 0;
    y = 0;
    std::cout << "Llamando al constructor" << std::endl;
}

Point::Point(int _x, int _y)
{
    x = _x;
    y = _y;
    std::cout << "Llamando al constructor con args" << std::endl;
}

Point::~Point()
{
    std::cout << "Llamando al destructor" << std::endl;
}

void Point::print() const {
    std::cout << "(" << x << ", " << y << ")";
}

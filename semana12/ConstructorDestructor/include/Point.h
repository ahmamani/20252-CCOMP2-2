#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point
{
    public:
        Point();
        Point(int _x, int _y);
        void print() const;
        ~Point();
    private:
        int x;
        int y;
};

#endif // POINT_H

#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point
{
    public:
        Point();
        Point(int _x, int _y);

        void print() const;
        void setPoint(int _x, int _y);

        virtual ~Point();
    private:
        int x;
        int y;
};

#endif // POINT_H

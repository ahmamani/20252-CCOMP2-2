#ifndef DYNAMICPOINTARRAY_H
#define DYNAMICPOINTARRAY_H

#include "Point.h"

class DynamicPointArray
{
    public:
        DynamicPointArray();
        DynamicPointArray(Point arr[], int size);
        DynamicPointArray(DynamicPointArray &o);
        virtual ~DynamicPointArray();

        int getSize() const;
        void print() const;

        void push_back(Point p);
        void insert(Point p, int pos);
        void remove(int pos);
    private:
        Point *data;
        int size;
};

#endif // DYNAMICPOINTARRAY_H

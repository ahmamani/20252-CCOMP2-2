#ifndef INTEGERARRAY_H
#define INTEGERARRAY_H

#include <iostream>

class IntegerArray
{
    public:
        IntegerArray(int size);
        void setData(int val, int idx);
        int getData(int idx) const;
        int getSize() const;
        void print() const;
        virtual ~IntegerArray();

    private:
        int size;
        int *data;
};

#endif // INTEGERARRAY_H

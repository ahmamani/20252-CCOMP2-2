#ifndef DYNAMICINTEGERARRAY_H
#define DYNAMICINTEGERARRAY_H

#include <iostream>

class DynamicIntegerArray
{
    public:
        DynamicIntegerArray();
        DynamicIntegerArray(int arr[], int size);

        int getSize() const;
        void print() const;

        void push_back(int val);

        ~DynamicIntegerArray();

    private:
        int* data;
        int size;
};

#endif // DYNAMICINTEGERARRAY_H

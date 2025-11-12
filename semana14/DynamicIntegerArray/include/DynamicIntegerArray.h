#ifndef DYNAMICINTEGERARRAY_H
#define DYNAMICINTEGERARRAY_H

#include <iostream>

class DynamicIntegerArray
{
    public:
        DynamicIntegerArray();
        DynamicIntegerArray(int arr[], int size);
        DynamicIntegerArray(DynamicIntegerArray &o);

        int getSize() const;
        void print() const;

        void push_back(int val);
        void insert(int val, int pos);
        void remove(int pos);

        ~DynamicIntegerArray();

    private:
        int* data;
        int size;
};

#endif // DYNAMICINTEGERARRAY_H

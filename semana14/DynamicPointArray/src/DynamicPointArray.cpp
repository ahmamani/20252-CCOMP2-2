#include "DynamicPointArray.h"

DynamicPointArray::DynamicPointArray()
{
    this->size = 0;
    this->data = new Point[size];
}

DynamicPointArray::DynamicPointArray(Point arr[], int size)
{
    this->size = size;
    this->data = new Point[size];
    for(int i = 0; i < size; i++)
        this->data[i] = arr[i];
}

DynamicPointArray::DynamicPointArray(DynamicPointArray &o)
{
    this->size = o.size;
    this->data = new Point[size];
    for(int i = 0; i < size; i++)
        this->data[i] = o.data[i];
}

void DynamicPointArray::print() const {
    std::cout << "[ ";
    for(int i = 0; i < size; i++){
        this->data[i].print();
        std::cout << " ";
    }
    std::cout << "]";
}

DynamicPointArray::~DynamicPointArray()
{
    delete[] data;
}

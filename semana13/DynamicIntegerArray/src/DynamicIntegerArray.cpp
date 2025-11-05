#include "DynamicIntegerArray.h"

DynamicIntegerArray::DynamicIntegerArray()
{
    this->size = 0;
    this->data = new int[size];
}

DynamicIntegerArray::DynamicIntegerArray(int arr[], int size)
{
    this->size = size;
    this->data = new int[size];
    for(int i = 0; i < size; i++)
        this->data[i] = arr[i];
}

int DynamicIntegerArray::getSize() const {
    return size;
}

void DynamicIntegerArray::print() const {
    std::cout << "[ ";
    for(int i = 0; i < size; i++){
        std::cout << this->data[i] << " ";
    }
    std::cout << "]";
}

void DynamicIntegerArray::push_back(int val) {
    int *tmp = new int[size+1];
    for(int i = 0; i < size; i++)
        tmp[i] = this->data[i];
    tmp[size] = val;
    size++;
    delete[] data;
    this->data = tmp;
}

DynamicIntegerArray::~DynamicIntegerArray()
{
    delete[] data;
}

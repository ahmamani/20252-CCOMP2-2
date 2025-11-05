#include "IntegerArray.h"

IntegerArray::IntegerArray(int size)
{
    this->size = size;
    this->data = new int[size];
}

void IntegerArray::setData(int val, int idx) {
    if(idx >= 0 || idx < size) {
        this->data[idx] = val;
    }
}

int IntegerArray::getData(int idx) const {
    if(idx >= 0 || idx < size) {
        return this->data[idx];
    }
}

int IntegerArray::getSize() const {
    return this->size;
}

void IntegerArray::print() const {
    std::cout << "[ ";
    for(int i = 0; i < size; i++){
        std::cout << this->data[i] << " ";
    }
    std::cout << "]";
}

IntegerArray::~IntegerArray()
{
    delete[] data;
}

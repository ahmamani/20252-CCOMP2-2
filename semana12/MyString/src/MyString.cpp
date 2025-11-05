#include "MyString.h"

MyString::MyString(char *arr)
{
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
    }
    this->size = count;
    this->data = new char[count+1];
    for(int i = 0; arr[i] != '\0'; i++){
        this->data[i] = arr[i];
    }
    this->data[size] = '\0';
}

int MyString::getSize() const {
    return size;
}

char* MyString::getData() const {
    return this->data;
}

void MyString::toLower() {
    for(int i = 0; i < size; i++){
        if(data[i] >= 65 && data[i] <= 90)
             data[i] += 32;
    }
}

void MyString::toUpper() {
    for(int i = 0; i < size; i++){
        if(data[i] >= 97 && data[i] <= 122)
             data[i] -= 32;
    }
}

MyString::~MyString()
{
    delete[] data;
}

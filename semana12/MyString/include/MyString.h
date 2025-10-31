#ifndef MYSTRING_H
#define MYSTRING_H


class MyString
{
    public:
        MyString(char *data, int size);
        virtual ~MyString();

    private:
        int size;
        char *data;
};

#endif // MYSTRING_H

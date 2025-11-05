#ifndef MYSTRING_H
#define MYSTRING_H


class MyString
{
    public:
        MyString(char *data);
        int getSize() const;
        char* getData() const;

        void toUpper();
        void toLower();

        ~MyString();

    private:
        int size;
        char *data;
};

#endif // MYSTRING_H

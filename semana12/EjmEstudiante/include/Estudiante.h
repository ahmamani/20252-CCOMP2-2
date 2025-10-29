#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <iostream>
#include <string>

class Estudiante
{
    public:
        Estudiante(std::string _name, int _age);
        void print() const;
        ~Estudiante();

    private:
        std::string name;
        int age;
};

#endif // ESTUDIANTE_H

#include "Estudiante.h"

Estudiante::Estudiante(std::string _name, int _age)
{
    name = _name;
    age = _age;
}

void Estudiante::print() const {
    std::cout << "El nombre es: " << name << std::endl;
    std::cout << "La edad es: " << age << std::endl;
}

Estudiante::~Estudiante()
{
    //dtor
}

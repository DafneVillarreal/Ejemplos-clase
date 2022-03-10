#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

using namespace std;

class Persona
{
public:
    Persona();

    string getNombre() const;
    void setNombre(const string& valor);
    string getNacionalidad() const;
    void setNacionalidad(const string& valor);
    int getEdad() const;
    void setEdad(int valor);

private:
    string nombre;
    string nacionalidad;
    int edad;
};

#endif // PERSONA_H

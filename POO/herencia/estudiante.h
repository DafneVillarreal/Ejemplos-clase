#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>
#include "persona.h"

using namespace std;

class Estudiante : public Persona
{
public:
    Estudiante();

    string getCodigo() const;
    void setCodigo(const string& valor);
    int getCreditos() const;
    void setCreditos(int valor);
    float getPromedio() const;
    void setPromedio(float valor);

private:
    string codigo;
    int creditos;
    float promedio;
};

#endif // ESTUDIANTE_H

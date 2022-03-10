#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>

using namespace std;

class Estudiante
{
public:
    Estudiante();

    string getNombre() const;
    void setNombre(const string& valor);
    string getCarrera() const;
    void setCarrera(const string& valor);
    string getCodigo() const;
    void setCodigo(const string& valor);

private:
    string nombre;
    string carrera;
    string codigo;
};

#endif // ESTUDIANTE_H

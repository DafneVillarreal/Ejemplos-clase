#ifndef GRUPO_H
#define GRUPO_H
#include <iostream>
#include "estudiante.h"

using namespace std;

class Grupo
{
public:
    Grupo();

    string getMateria() const;
    void setMateria(const string& valor);
    string getSeccion() const;
    void setSeccion(const string& valor);
    string getNrc() const;
    void setNrc(const string& valor);
    void menu();
    void agregarEstudiante();
    void consultarEstudiante(const Estudiante& e);
    void consultarLista();
    void buscarEstudiante();
    void modificarEstudiante();

private:
    //static permite utilizar la constante fuera de la clase.
    static const int MAX_ESTUDIANTES = 40;
    Estudiante estudiantes[MAX_ESTUDIANTES];
    int contadorEstudiantes;
    string materia;
    string seccion;
    string nrc;

    enum Opciones
    {
        OPC_SALIR,
        OPC_AGREGAR,
        OPC_CONSULTAR,
        OPC_BUSCAR,
        OPC_MODIFICAR
    };
};

#endif // GRUPO_H

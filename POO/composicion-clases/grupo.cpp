#include "grupo.h"

Grupo::Grupo()
{
    materia = "-";
    seccion = "-";
    nrc = "-";
    contadorEstudiantes = 0;
}

string Grupo::getMateria() const
{
    return materia;
}

void Grupo::setMateria(const string &valor)
{
    materia = valor;
}

string Grupo::getSeccion() const
{
    return seccion;
}

void Grupo::setSeccion(const string &valor)
{
    seccion = valor;
}

string Grupo::getNrc() const
{
    return nrc;
}

void Grupo::setNrc(const string &valor)
{
    nrc = valor;
}

void Grupo::menu()
{
    int opc;
    do
    {
        cout <<"                        " <<materia <<" " <<seccion <<endl <<endl
            <<OPC_AGREGAR <<") Agregar Estudiante" <<endl
           <<OPC_CONSULTAR <<") Consultar Lista" <<endl
          <<OPC_BUSCAR <<") Buscar Estudiante" <<endl
         <<OPC_MODIFICAR <<") Modificar Estudiante" <<endl
        <<OPC_SALIR <<") Salir" <<endl
        <<"Selecciona una opción: ";
        cin >>opc;
        cin.ignore();

        switch (opc)
        {
        case OPC_AGREGAR:
            cout <<"                        Agregar Estudiante" <<endl;
            if (contadorEstudiantes < MAX_ESTUDIANTES)
            {
                agregarEstudiante();
            }
            else
            {
                cout <<"El grupo está lleno." <<endl <<endl;
            }
            break;
        case OPC_CONSULTAR:
            cout <<"                        Consultar Lista" <<endl;
            if (contadorEstudiantes > 0)
            {
                consultarLista();
            }
            else
            {
                cout <<"No hay estudiantes registrados." <<endl <<endl;
            }
            break;
        case OPC_BUSCAR:
            cout <<"                        Buscar Estudiante" <<endl;
            if (contadorEstudiantes > 0)
            {
                buscarEstudiante();
            }
            else
            {
                cout <<"No hay estudiantes registrados." <<endl <<endl;
            }
            break;
        case OPC_MODIFICAR:
            cout <<"                        Modificar Estudiante" <<endl;
            if (contadorEstudiantes > 0)
            {
                modificarEstudiante();
            }
            else
            {
                cout <<"No hay estudiantes registrados." <<endl <<endl;
            }
            break;
        case OPC_SALIR:
            cout <<"Saliendo del grupo" <<endl <<endl;
            break;
        default:
            cout <<"Opción no válida" <<endl <<endl;
            break;
        }
    }
    while(opc != OPC_SALIR);
}

void Grupo::agregarEstudiante()
{
    string auxCadena;

    cout <<"Ingresa los datos de un estudiante" <<endl <<endl
        <<"Nombre: ";
    getline(cin, auxCadena);
    estudiantes[contadorEstudiantes].setNombre(auxCadena);
    cout <<"Carrera: ";
    getline(cin, auxCadena);
    estudiantes[contadorEstudiantes].setCarrera(auxCadena);
    cout <<"Código: ";
    getline(cin, auxCadena);
    estudiantes[contadorEstudiantes].setCodigo(auxCadena);

    ++contadorEstudiantes;
    cout <<"Estudiante registrado con éxito." <<endl <<endl;

}

void Grupo::consultarEstudiante(const Estudiante &e)
{
    cout <<"Nombre: " <<e.getNombre() <<endl
        <<"Carrera: " <<e.getCarrera() <<endl
       <<"Código: " <<e.getCodigo() <<endl;
}

void Grupo::consultarLista()
{
    for (int i(0); i < contadorEstudiantes; ++i)
    {
        consultarEstudiante(estudiantes[i]);
        cout <<"-------------------------------" <<endl;
    }
}

void Grupo::buscarEstudiante()
{
    int cantidad = 0;
    string patron;

    cout <<"Nombre: ";
    getline(cin, patron);

    for (int i(0); i < contadorEstudiantes; ++i)
    {
        if (estudiantes[i].getNombre().find(patron, 0) < estudiantes[i].getNombre().size())
        {
            consultarEstudiante(estudiantes[i]);
            cout <<"-------------------------------" <<endl;
            ++cantidad;
        }
    }
    cout <<"Se encontraron " <<cantidad <<" estudiantes." <<endl <<endl;
}

void Grupo::modificarEstudiante()
{
    string codigo;
    int i;

    cout <<"Código: ";
    getline(cin, codigo);

    for (i = 0; i < contadorEstudiantes; ++i)
    {
        if (estudiantes[i].getCodigo() == codigo)
        {
            string auxCadena;

            cout <<"Datos de el/la estudiante: " <<endl <<endl;
            consultarEstudiante(estudiantes[i]);
            cout <<"Ingresa los nuevos datos:" <<endl
                <<"Nombre: ";
            getline(cin, auxCadena);
            estudiantes[i].setNombre(auxCadena);
            cout <<"Carrera: ";
            getline(cin, auxCadena);
            estudiantes[i].setCarrera(auxCadena);
            cout <<"Código: ";
            getline(cin, auxCadena);
            estudiantes[i].setCodigo(auxCadena);

            cout <<"Datos actualizados con éxito." <<endl <<endl;
            break;
        }
    }
    if (i == contadorEstudiantes)
    {
        cout <<"No se encontró el estudiante." <<endl <<endl;
    }
}

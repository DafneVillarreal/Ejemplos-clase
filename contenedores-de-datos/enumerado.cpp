#include <iostream>

using namespace std;

enum Opciones
{
    OPC_SALIR, // Por omisión toma valor de 0
    OPC_AGREGAR = 100,
    OPC_CONSULTAR,
    OPC_BUSCAR,
    OPC_ELIMINAR
};

int main()
{
    cout <<"Menú de opciones" << endl <<endl
        <<OPC_AGREGAR <<") Agregar" <<endl
       <<OPC_CONSULTAR <<") Consultar" <<endl
      <<OPC_BUSCAR <<") Buscar" <<endl
     <<OPC_ELIMINAR <<") Eliminar" <<endl
    <<OPC_SALIR <<") Salir" <<endl
    <<"Selecciona una opción: ";

    return 0;
}

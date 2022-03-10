#include <iostream>
#include <fstream> //FileSTREAM : Flujo de archivo
#include "producto.h"

using namespace std;

int main()
{
    fstream archivo; //Permite manejar archivos de entrada y salida
    const string NOMBRE_ARCHIVO = "productos.txt";

    /* Escritura en archivo */
    archivo.open(NOMBRE_ARCHIVO, ios::app); //app : append : añadir
    if (!archivo.is_open())
    {
        cout <<"Error al abrir el archivo de escritura." <<endl;
    }
    else
    {
        Producto p;
        cout <<"Ingresa un producto con el formato nombre|precio|existencia:";
        cin >>p;
        archivo <<p;
        archivo.close();
    }
    /* Escritura en archivo */

    /* Lectura desde archivo */
    archivo.open(NOMBRE_ARCHIVO, ios::in); //in : entrada
    if (!archivo.is_open())
    {
        cout <<"Error al abrir el archivo de lectura." <<endl;
    }
    else
    {
        Producto p;
        while(archivo >>p)
        {
            cout <<p;
        }
        archivo.close();
    }
    /* Lectura desde archivo */
    return 0;
}

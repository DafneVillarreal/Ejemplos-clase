//#include <stdio.h> //Standard Input Output en C
#include <iostream> //Input Output STREAM (STREAM : flujo) en C++

//Espacio de nombres Estándard. Contiene palabras reservadas del lenguaje
using namespace std;

int main()
{
    /*int entero = 33;
    float real;
    string cadena = "Esto es una frase";

    //Console OUT
    cout << "Hello World!" << endl <<endl
         <<endl <<endl <<"Hola crayola\n\n\n" <<endl; //endl Fin de línea ENDLine
    //printf("El valor entero es %d\n", entero); en C
    cout <<"El valor entero es " <<entero <<endl;

    cout <<"Ingresa un nuevo valor: ";
    //Console IN
    cin >>entero; //en C++
    //scanf("%d", &entero); en C

    cout <<"El nuevo valor es: " <<entero <<endl;

    cout <<"Ingresa un número real (con punto flotante): ";
    cin >>real;
    cout <<"Ingresaste: " <<real <<endl;

    cout <<"Cadena: " <<cadena <<endl;

    cout <<"Escribe una palabra o frase: ";
    cin.ignore(); //Limpia el buffer de entrada
    getline(cin, cadena); //Lee una línea que acepta espacios en blanco
    cout <<"Ingresaste: " <<cadena <<endl;*/

    const int TAMANO = 10;

    //Contenedores de datos : Arreglo
    //Declaración: <tipo de dato> <identificador>[<tamaño>]
    int enteros[TAMANO];
    //Inicialización explícita
    string cadenas[5] = {"Uno", "Dos", "Tres", "Cuatro", "Cinco"};

    //Asignación : <identificador>[<posición>] = <valor>
    enteros[0] = 3;
    enteros[2] = 5;
    enteros[3] = 7;
    cadenas[0] = "Hola";
    cadenas[1] = "manzana";


    cout <<"Enteros: " <<endl <<enteros[0] <<endl <<enteros[2] <<endl;
    cout <<"Cadenas: " <<endl <<cadenas[0] <<endl <<cadenas[1] <<endl
        <<cadenas[2] <<endl;

    cout <<"Ingresa los elementos del arreglo: " <<endl;
    for (int i(0); i < TAMANO; ++i)
    {
        cout <<"enteros[" <<i <<"] = ";
        cin >>enteros[i];
    }

    cout <<"Arreglo de enteros:" <<endl;
    for (int i(0); i < TAMANO; ++i)
    {
        cout <<"enteros[" <<i <<"] = " <<enteros[i] <<endl;
    }

    const int RENGLONES = 3;
    const int COLUMNAS = 3;
    int matriz[RENGLONES][COLUMNAS] = {
        {1, 3, 5},
        {7, 9, 11},
        {13, 15, 17}
    };

    int arreglo[] = {2, 4, 6};

    return 0;
}

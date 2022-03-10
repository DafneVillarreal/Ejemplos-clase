#include <iostream>
#include "pila.h"

using namespace std;

int main()
{
    Pila<int> pilaEnteros;

    pilaEnteros.push(5);
    pilaEnteros.push(3);
    pilaEnteros.push(1);

    pilaEnteros.pop();

    cout <<"empty: " <<(pilaEnteros.empty() ? "Verdadero" : "Falso") <<endl
        <<"size: " <<pilaEnteros.size() <<endl
       <<"top: " <<pilaEnteros.top() <<endl <<endl;

    while(!pilaEnteros.empty())
    {
        cout <<pilaEnteros.top() <<endl;
        pilaEnteros.pop();
    }

    return 0;
}

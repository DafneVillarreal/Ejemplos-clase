#include <iostream>
#include "lista_estatica.h"

using namespace std;

int main()
{
    //Lista estática de 1000 enteros
    ListaEstatica<int> enteros;
    //Lista estática de 50 símbolos
    ListaEstatica<char> simbolos(50);

    enteros.push_front(55);
    enteros.push_front(33);
    enteros.push_back(77);
    //enteros.pop_front();
    //enteros.pop_back();
    //enteros.insert(1, 44);
    //enteros.erase(1);
    enteros.push_back(55);

    enteros.remove(55);
    //enteros[0] = 335577;
    cout <<"enteros.empty() : " <<enteros.empty() <<endl
        <<"enteros.full() : " <<enteros.full() <<endl
       <<"enteros.size() : " <<enteros.size() <<endl
      <<"enteros.front() : " <<enteros.front() <<endl
     <<"enteros.back() : " <<enteros.back() <<endl
    <<"Datos:" <<endl;

    for (size_t i(0); i < enteros.size(); ++i)
    {
        cout <<enteros[i] <<" ";
    }
    cout <<endl;

    return 0;
}

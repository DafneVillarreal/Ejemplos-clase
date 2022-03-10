#include <iostream>
#include "cola.h"

using namespace std;

int main()
{
    Cola<char> simbolos;

    simbolos.push('A');
    simbolos.push('E');
    simbolos.push('I');
    simbolos.push('O');
    simbolos.push('U');

    cout <<"empty: " <<simbolos.empty() <<endl
        <<"size: " <<simbolos.size() <<endl
       <<"front: " <<simbolos.front() <<endl
      <<"back: " <<simbolos.back() <<endl <<endl;

    while(!simbolos.empty())
    {
        cout <<simbolos.front() <<" ";
        simbolos.pop();
    }
    cout <<endl;
    return 0;
}

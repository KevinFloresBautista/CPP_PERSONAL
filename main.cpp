#include <iostream>
#include "funciones.hpp"
using namespace std;


int main()
{

    int n, len, valor, valorBuscar;
    n = 4;
    len = 2;
    valor = 2000;
    int vector[n] = {100, 100};
    agregar(vector, n, len, valor);
    mostrar(vector, len);

    cout << "ingrese el valor a buscar" << endl;
    cin >> valorBuscar;
    buscar(vector, len, valorBuscar);

    return 0;
}

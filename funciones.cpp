#include "funciones.hpp"
#include <iostream>
using namespace std;


void agregar(int arr[], int n, int &len, int v)
{
    if (len >= n)
    {
        cout << "el vector esta lleno" << endl;
    }
    else
    {
        arr[len] = v;
        len++;
        cout << len << endl;
    }
}

void mostrar(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "posicion en el main: " << i << " -> valor en el arr: " << arr[i] << endl;
    };
};

int buscar(int arr[], int len, int v)
{
    int posicion = -1;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == v)
        {
            // posicion = i;
            // cout << "el valor fue encontrado: " << v << " y esta en la posicion: " << posicion << endl;
            cout << "posicion: " << i << endl;
            return posicion = i;
        }
    }

    cout << "error: " << -1 << endl;
    return posicion = -1;
};
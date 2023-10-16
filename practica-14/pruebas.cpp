#include<iostream>
using namespace std;
//filas = cuantos punteros apunto, columnas los punteros hasta cuantas posiciones de memoria puedo apuntar
void mifuncion(int **arreglo, int filas, int columnas)
{
    arreglo = new int*[filas];
    for(int i=0; i<filas;i++)
    {
        arreglo[i] = new int[columnas]; //reservo la cantidad de memoria que voy a utilizar y regreso la primera posicion de dicho bloque de memoria
    }; i<filas; i++)
    {
        cout<<arreglo[i]<<endl;
    }
}

int main()

    for(int i=0
{
    int arreglo[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int *[int]a = arreglo;

    mifuncion(a, 3, 3);
}
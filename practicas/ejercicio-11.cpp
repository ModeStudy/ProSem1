#include<iostream>
using namespace std;

int main()
{
    int montoPrestado = 100000, porcentajeInteres = 10, mensualidades = 12;
    float mensualidad;
    mensualidad = (montoPrestado*0.10+montoPrestado)/12;
    cout<<"Por "<<montoPrestado<<" con una % de interes de "<<porcentajeInteres<<" a pagar a un año la mensualidad seria: "<<mensualidad<<endl;
    return 0;
}
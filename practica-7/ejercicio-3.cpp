#include<iostream>
using namespace std;

int main()
{
    int limite;
    cout<<"De que tamaño quieres tu cuadrado"<<endl;
    cin>>limite;

    for(int fila = 0; fila < limite; fila++)
    {
        for(int columna = 0; columna < limite; columna++)
        {
            cout<<"#";
        }
        cout<<endl;
    }

    return 0;
}
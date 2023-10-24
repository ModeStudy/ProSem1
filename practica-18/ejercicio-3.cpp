#include<iostream>
using namespace std;

struct producto
{
    int cantidad;
    float precio;
    string nombre;
};


int main()
{
    int tamano=2;
    producto invetarioTienda[tamano];
    for(int i=0;i<tamano;i++)
    {
        cout<<"Nombre del producto: ";
        cin.ignore();
        getline(cin, invetarioTienda[i].nombre);
        cout<<"Precio ";
        cin>>invetarioTienda[i].precio;
        cout<<"Cantidad ";
        cin>>invetarioTienda[i].cantidad;
    }

    for(int i=0;i<tamano;i++)
    {
        cout<<"----------"<<endl;
        cout<<"nombre: "<<invetarioTienda[i].nombre<<endl;
        cout<<"precio: "<<invetarioTienda[i].precio<<endl;
        cout<<"cantidad: "<<invetarioTienda[i].cantidad<<endl;
    }

    return 0;
}
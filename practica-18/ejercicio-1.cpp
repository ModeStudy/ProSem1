#include<iostream>
using namespace std;

struct persona
{
    string nombre;
    int edad;
    float peso;
};


int main()
{
    int tamano=2;
    persona listaPersonas[tamano];

    for(int i=0;i<tamano;i++)
    {
        cout<<"Como quieres que se llame la persona "<<i+1<<endl;
        cin>>listaPersonas[i].nombre;
        cout<<"¿Que edad tiene?: "<<endl;
        cin>>listaPersonas[i].edad;
        cout<<"¿Cuanto pesa?: "<<endl;
        cin>>listaPersonas[i].peso;
    }

    for(int i=0;i<tamano;i++)
    {
        cout<<"La persona "<<i+1<<" se llama "<<listaPersonas[i].nombre<<endl;
        cout<<"Edad "<<listaPersonas[i].edad<<endl;
        cout<<"Peso "<<listaPersonas[i].peso<<endl;
    }

    return 0;
}
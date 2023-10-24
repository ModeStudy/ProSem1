#include<iostream>
using namespace std;

struct coche
{
    float motor, vmaxima;
    string marca, modelo;
};


int main()
{
    int tamano=2;
    coche coches[tamano];
    for(int i=0;i<tamano;i++)
    {
        cout<<"marca del coche: ";
        
        getline(cin, coches[i].marca);
        cout<<"Modelo: ";
        getline(cin, coches[i].modelo);
        cout<<"Motor: ";
        cin>>coches[i].motor;
        cout<<"Velocidad maxima: ";
        cin>>coches[i].vmaxima;
        cin.ignore();
    }

    for(int i=0;i<tamano;i++)
    {
        cout<<"----------"<<endl;
        cout<<"marca: "<<coches[i].marca<<endl;
        cout<<"modelo: "<<coches[i].modelo<<endl;
        cout<<"motor: "<<coches[i].motor<<endl;
        cout<<"Velocidad maxima: "<<coches[i].vmaxima<<endl;
    }

    return 0;
}
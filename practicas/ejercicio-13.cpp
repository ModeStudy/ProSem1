#include<iostream>
using namespace std;

int main()
{
    int numeroNoches, desicion,habitacion[3]{50,75,100}; //0 estandar, 1 superior, 2 suite
    cout<<"Cuantas noches te quedaras"<<endl;
    cin>>numeroNoches;
    cout<<"Precio de habitacion por noche"<<endl;
    cout<<"1- Estandar: "<<habitacion[0]<<endl;
    cout<<"2- Superior: "<<habitacion[1]<<endl;
    cout<<"3- Suite: "<<habitacion[2]<<endl;
    cout<<"Que habitación deseas ";
    cin>>desicion;
    if(desicion>3 || desicion < 1)
    {
        cout<<"desicion no valida, se te asignara la mas cara :D"<<endl;
        desicion = 2;

    }else{
    desicion -= 1;
    }
    cout<<"El precio por la habitacion y los dias escogidos es de: "<<numeroNoches*habitacion[desicion]<<endl;

    return 0;
}
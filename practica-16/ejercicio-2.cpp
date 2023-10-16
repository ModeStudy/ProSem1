#include<iostream>
using namespace std;

void guardarPrecios(float *, float *, float);
void mostrarPrecios(float *, float *, float);
void reiniciarPrecios(float *, float *, float);
int menu();

int main()
{
    // 0 precio normal y 1 precio a mayoreo
    int productos=8;
    float preciosProductos[3][productos];//2 punteros a cada precio y 8 bloques de memoria
    //para que las calificaciones sean 0 sino se han ingresado
    reiniciarPrecios(preciosProductos[0], preciosProductos[1], productos);
    int desicion=1;
    do
    {
        desicion = menu();
        if(desicion == 1)
            guardarPrecios(preciosProductos[0], preciosProductos[1], productos);
        if(desicion == 2)
            mostrarPrecios(preciosProductos[0], preciosProductos[1], productos);
    } while (desicion != 3);
    cout<<"Adios :("<<endl;
    return 0;
}

int menu()
{
    int desicion;
    cout<<endl<<endl;
    cout<<"1- Guardar Precios"<<endl;
    cout<<"2- Mostrar Precios"<<endl;
    cout<<"3- salir"<<endl;
    cout<<"Que deseas hacer"<<endl;
    cin>>desicion;
    return desicion;
}

void reiniciarPrecios(float *precioNormal, float *precioMayoreo, float productos)
{
    for(int i=0;i<productos;i++)
    {
        precioNormal[i] = 0;
        precioMayoreo[i] = 0;
    }
}

void guardarPrecios(float *precioNormal, float *precioMayoreo, float productos)
{
    int opc;
        for(int i=0; i<productos;i++)
        {
        cout<<"Precio normal"<<endl;
        cin>>precioNormal[i];
        cout<<"Precio a mayoreo "<<endl;
        cin>>precioMayoreo[i];
        cout<<"¿deseas guardar otra precio? 1-si / 2-no"<<endl;
        cin>>opc;
        if(opc == 2)
            break;
        }
    
    
}

void mostrarPrecios(float *precioNormal, float *precioMayoreo, float productos)
{
    for(int i=0; i<productos;i++)
    {
        cout<<precioNormal[i]<<" ";
        cout<<precioMayoreo[i]<<" ";
        cout<<endl;
    }
}
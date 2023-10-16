#include<iostream>
using namespace std;

void guardarCalificaciones(float *, float *, float *, float);
void mostrarCalificaciones(float *, float *, float *, float);
void reiniciarCalificaciones(float *, float *, float *, float);
int menu();

int main()
{
    float calificacionesAlumnos[3][10];//3 punteros a cada parcial y 10 bloques de memoria
    //para que las calificaciones sean 0 sino se han ingresado
    reiniciarCalificaciones(calificacionesAlumnos[0], calificacionesAlumnos[1], calificacionesAlumnos[2], 10);
    int desicion=1;
    do
    {
        desicion = menu();
        if(desicion == 1)
            guardarCalificaciones(calificacionesAlumnos[0], calificacionesAlumnos[1], calificacionesAlumnos[2], 10);
        if(desicion == 2)
            mostrarCalificaciones(calificacionesAlumnos[0], calificacionesAlumnos[1], calificacionesAlumnos[2], 10);
    } while (desicion != 3);
    cout<<"Adios :("<<endl;
    return 0;
}

int menu()
{
    int desicion;
    cout<<endl<<endl;
    cout<<"1- Guardar calificaciones"<<endl;
    cout<<"2- Mostrar calificaciones"<<endl;
    cout<<"3- salir"<<endl;
    cout<<"Que deseas hacer"<<endl;
    cin>>desicion;
    return desicion;
}

void reiniciarCalificaciones(float *parcial1, float *parcial2, float *parcial3, float alumnos)
{
    for(int i=0;i<alumnos;i++)
    {
        parcial1[i] = 0;
        parcial2[i] = 0;
        parcial3[i] = 0;
    }
}

void guardarCalificaciones(float *parcial1, float *parcial2, float *parcial3, float alumnos)
{
    int opc;
        for(int i=0; i<alumnos;i++)
        {
        cout<<"Calificación del primer parcial "<<endl;
        cin>>parcial1[i];
        cout<<"Calificación del segundo parcial "<<endl;
        cin>>parcial2[i];
        cout<<"Calificación del tercer parcial "<<endl;
        cin>>parcial3[i];
        cout<<"¿deseas guardar otra calificación? 1-si / 2-no"<<endl;
        cin>>opc;
        if(opc == 2)
            break;
        }
    
    
}

void mostrarCalificaciones(float *parcial1, float *parcial2, float *parcial3, float alumnos)
{
    for(int i=0; i<alumnos;i++)
    {
        cout<<parcial1[i]<<" ";
        cout<<parcial2[i]<<" ";
        cout<<parcial3[i];
        cout<<endl;
    }
}
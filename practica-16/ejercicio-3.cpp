#include<iostream>
using namespace std;

void guardarColores(string *, string *, string *, float);
void mostrarColores(string *, string *, string *, float);
void reiniciarColores(string *, string *, string *, float);
int menu();

int main()
{
    // 0 precio normal y 1 precio a mayoreo
    int personas=5;
    string coloresFavoritos[3][personas];//2 punteros a cada precio y 8 bloques de memoria
    //para que las calificaciones sean 0 sino se han ingresado
    reiniciarColores(coloresFavoritos[0], coloresFavoritos[1], coloresFavoritos[2], personas);
    int desicion=1;
    do
    {
        desicion = menu();
        if(desicion == 1)
            guardarColores(coloresFavoritos[0], coloresFavoritos[1], coloresFavoritos[2], personas);
        if(desicion == 2)
            mostrarColores(coloresFavoritos[0], coloresFavoritos[1], coloresFavoritos[2], personas);
    } while (desicion != 3);
    cout<<"Adios :("<<endl;
    return 0;
}

int menu()
{
    int desicion;
    cout<<endl<<endl;
    cout<<"1- Guardar colores"<<endl;
    cout<<"2- Mostrar colores"<<endl;
    cout<<"3- salir"<<endl;
    cout<<"Que deseas hacer"<<endl;
    cin>>desicion;
    return desicion;
}

void reiniciarColores(string *color1, string *color2, string *color3, float personas)
{
    for(int i=0;i<personas;i++)
    {
        color1[i] = "";
        color2[i] = "";
        color3[i] = "";
    }
}

void guardarColores(string *color1, string *color2, string *color3, float personas)
{
    int opc;
        for(int i=0; i<personas;i++)
        {
            cin.ignore();
            cout<<"Primer color favorito"<<endl;
            getline(cin, color1[i]);
            cout<<"Segundo color favorito"<<endl;
            getline(cin, color2[i]);
            cout<<"Tercer color favorito"<<endl;
            getline(cin, color3[i]);
            cout<<"¿deseas guardar otros gustos de una persona? 1-si / 2-no"<<endl;
            cin>>opc;
            if(opc == 2)
            break;
        }
    
    
}

void mostrarColores(string *color1, string *color2, string *color3, float personas)
{
    for(int i=0; i<personas;i++)
    {
        cout<<color1[i]<<" ";
        cout<<color2[i]<<" ";
        cout<<color3[i]<<" ";
        cout<<endl;
    }
}
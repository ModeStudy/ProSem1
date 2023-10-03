#include<iostream>
#include<string>
using namespace std;
string peliculas[5];
int peliActual= 0;
bool ListaLlena = false;

void menu()
{
    cout<<"Elige una opción: "<<endl;
    cout<<"1- Ingresar un nombre de película"<<endl;
    cout<<"2- Imprimir nombres de películas"<<endl;
    cout<<"3- Eliminar todos los nombres"<<endl;
    cout<<"4- Salir"<<endl;
}

void agregarMovie()
{
    int nuevaPeli;
    do
    {
        cout<<"¿Qué película deseas agregar?"<<endl;
        cin>>peliculas[peliActual];
        peliActual++;
        if(!ListaLlena)
        {
            cout<<"Deseas agregar una nueva película 1-Si / 2-No"<<endl;
            cin>>nuevaPeli;
        }
        else if(peliActual == 6)
        {
            cout<<"ya no hay mas espacios para las peliculas"<<endl;
            ListaLlena = true;
            nuevaPeli = 0;
        }
        
    } while (nuevaPeli == 1);
}

void mostrarMovies()
{
    cout<<"Las películas son"<<endl;
    for(int i = 0; i<sizeof(peliculas)/sizeof(peliculas[0]); i++)
    {
        cout<<peliculas[i]<<endl;
    }
}

void eliminarMovies()
{
    for(int i = 0; i<sizeof(peliculas)/sizeof(peliculas[0]); i++)
    {
        peliculas[i] = "";
    }

    cout<<"Las peliculas se la han eliminado con exito"<<endl;
    peliActual = 0;
    ListaLlena = false;
}

int main()
{
    int opc;
    menu();
    cin>>opc;
    do
    {
        switch (opc)
        {
        case 1:
            agregarMovie();
            break;
        case 2:
            mostrarMovies();
            break;
        case 3:
            eliminarMovies();
            break;
        case 4:
            cout<<"bye ;(";
            break; 
        default:
            cout<<"creo que esa no es una opcion pillin"<<endl;
            break;
        }
    }while(opc != 4);
    return 0;
}
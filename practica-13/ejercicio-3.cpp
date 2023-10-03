#include<iostream>
#include<string>
using namespace std;
string peliculas[5];
int peliActual= 0; //indica la posición del array peliculas donse se guardara el valor
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
    int nuevaPelicula;
    while(!ListaLlena) //si la lista no se ha llenado
    {
        
        if(peliActual < 5)
        {
            cout<<"¿Qué película deseas agregar?"<<endl;
            cin>>peliculas[peliActual];
            peliActual++;
            cout<<"¿Deseas agregar otra pelicula? 1-Si / 2-No"<<endl;
            cin>>nuevaPelicula;
            if(nuevaPelicula == 2)
                break;
        }
        else
        {
            cout<<"ya no hay mas espacios para las peliculas"<<endl;
            ListaLlena = true;
        }
    } 
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
    
    do
    {
        menu();
        cin>>opc;
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
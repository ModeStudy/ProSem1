#include<iostream>
using namespace std;

struct libro
{
    string titulo, autor, usuario;
};

struct usuario
{
    string nombre, correo;
    int telefono;
};

void registrarLibro(libro*, int*);
void registrarUsuario(usuario*, int*);

void editarUsuario(usuario*, int*);
void editarLibro(usuario*, int*);

int verUsuarios(usuario*, int*);


void verLibrosTodos(libro*, int*);
void verLibrosDisponibles(libro*, int*);
void verLibrosOcupados(libro*, int*);

void prestarLibro(libro*, int*, usuario*, int*);


int main()
{
    int ID_biblioteca=0, ID_usuario=0,opc;
    libro biblioteca[30];
    usuario usuarios[30];

    do
    {
        cout<<"Que deseas realizar"<<endl;
        cout<<"1. Ver Todos los libros."<<endl;
        cout<<"2. Ver libros Disponibles"<<endl;
        cout<<"3. Ver libros Ocupados."<<endl;
        cout<<"4. Registrar Libro"<<endl;
        cout<<"5. Registrar Usuario"<<endl;
        cout<<"6. Editar Libro"<<endl;
        cout<<"7. Editar Usuario"<<endl;
        cout<<"8. Prestar Libro"<<endl;
        cout<<"0. Salir."<<endl;
        cout<<endl<<endl;
        cin>>opc;
        switch (opc)
        {
        case 1:
            verLibrosTodos(biblioteca, &ID_biblioteca);
            break;
        case 2:
            verLibrosDisponibles(biblioteca, &ID_biblioteca);
            break;
        case 3:
            verLibrosOcupados(biblioteca, &ID_biblioteca);
            break;
        case 4:
            registrarLibro(biblioteca, &ID_biblioteca);
            break;
        case 5:
            registrarUsuario(usuarios, &ID_usuario);
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            prestarLibro(biblioteca, &ID_biblioteca, usuarios, &ID_usuario);
            break;
        default:
            cout<<"Esa no es una opción valida pillin :D"<<endl;
            break;
        }

    } while (opc != 0);
    return 0;
}


void registrarLibro(libro *biblioteca, int *ID)
{
    cin.ignore();
    cout<<"¿Cual es el titulo del libro? ";
    getline(cin, biblioteca[*ID].titulo);
    cout<<"¿Quien es el autor del libro? ";
    getline(cin, biblioteca[*ID].autor);
    biblioteca[*ID].usuario = "Null";
    *ID = *ID +1; //actualizar el espacio disponible actual
}

void registrarUsuario(usuario *usuarios, int *ID)
{
    cin.ignore();
    cout<<"¿Cual es tu nombre? ";
    getline(cin, usuarios[*ID].nombre);
    cout<<"¿Cual es tu correo electronico? ";
    getline(cin, usuarios[*ID].correo);
    cout<<"¿Cual es tu numero telefonico? ";
    cin>>usuarios[*ID].telefono;
    *ID = *ID +1; //actualizar el espacio disponible actual
}

void verLibrosDisponibles(libro *librosDisponibles, int *ID)
{
    cout<<"----libros disponibles----"<<endl;
    cout<<"ID"<<"\tAutor"<<"\ttitulo"<<endl; 
    for(int i=0; i<*ID;i++)
    {
        
        if(librosDisponibles[i].usuario == "Null")
        {
            cout<<i<<" \t"<<librosDisponibles[i].autor<<"\t"<<librosDisponibles[i].titulo<<endl;
        }
    }
}

void verLibrosTodos(libro *biblioteca, int *ID)
{
    cout<<"ID"<<"\tAutor"<<"\ttitulo"<<endl; 
    for(int i= 0; i<*ID; i++)
    {
        cout<<i<<"\t"<<biblioteca[i].titulo<<" \t"<<biblioteca[i].autor<<endl;
    }
}

void verLibrosOcupados(libro *biblioteca, int *ID)
{
    cout<<"----libros ocupados----"<<endl;
    cout<<"ID"<<"\tAutor"<<"\ttitulo"<<endl; 
    for(int i=0; i<*ID;i++)
    {
        
        if(biblioteca[i].usuario != "Null")
        {
            cout<<i<<" \t"<<biblioteca[i].autor<<"\t"<<biblioteca[i].titulo<<endl;
        }
    }
}

int verUsuarios(usuario *usuarios, int *ID)
{
    int id;
    if(*ID == 0)
    {
        cout<<"No existe ningun usuario, porfavor da de alta tu usuario"<<endl;
        id = -1;
    }
    else{
        cout<<"ID"<<"\tusuario"<<endl;
        for(int i=0; i<*ID;i++)
        {
            cout<<i<<"\t"<<usuarios[i].nombre<<endl;
        }
        cout<<"Porfavor elige tu usuario ";
        cin>>id; 
    }
    
    return id;
    
}

void prestarLibro(libro *biblioteca, int *ID, usuario *usuarios, int *ID_US)
{

    int usuario = verUsuarios(usuarios, ID_US);
    if(usuario != -1)
    {
         int opc;
        verLibrosDisponibles(biblioteca, ID);
        cout<<"Cual libro deseas solicitar ";
        cin>>opc;
        biblioteca[opc].usuario = usuarios[usuario].nombre;
        cout<<"libro solicitado exitosamente"<<endl;
    }
}
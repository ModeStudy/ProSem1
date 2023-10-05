#include<iostream>
using namespace std;
string producto[30];
    float costo[30];
    int contador=0;

void agregarProducto()
{
    if(contador<30)
    {
        cout<<"Nombre del producto que deseas agregar: "<<endl;
        getline(cin,producto[contador]);
        cout<<"Costo del producto: "<<endl;
        cin>>costo[contador];
        cin.ignore();
        contador++;
    }
    else
        cout<<"Ya se lleno la lista"<<endl;
}

void mostrar()
{
    for(int i=0;i<contador;i++)
    {
        cout<<i+1<<"- "<<producto[i]<<" $"<<costo[i]<<endl;
    }
}
void eleminarProducto()
{
    int indiceProducto;
    mostrar();
    cout<<"Cual deseas eliminar: "<<endl;
    cin>>indiceProducto;
    producto[indiceProducto-1] = "ELIMINADO";
    costo[indiceProducto-1] = 0;

}
void modificarCosto()
{
    int indiceProducto;
    mostrar();
    cout<<"Cual costo deseas modificar: "<<endl;
    cin>>indiceProducto;
    cout<<"Que precio deseas asginar: "<<endl;
    cin>>costo[indiceProducto-1];

}
void modificarNombre()
{
    int indiceProducto;
    mostrar();
    cout<<"Cual nombre deseas modificar: "<<endl;
    cin>>indiceProducto;
    cout<<"Que nombre deseas asginar: "<<endl;
    cin.ignore();
    getline(cin,producto[indiceProducto-1]);
}
int main()
{
    int menu = 1;
    while(menu!=0)
    {
        cout<<"1.Registrar un nuevo producto"<<endl;
        cout<<"2.Realizar venta"<<endl;
        cout<<"3.Imprimir catalogo de productos"<<endl;
        cout<<"4.Modificar descripcion del producto"<<endl;
        cout<<"5.Modificar precio de un producto"<<endl;
        cout<<"6.Eliminar producto"<<endl;
        cout<<"0.Salir"<<endl;
        cin>>menu;
        cin.ignore();
        switch(menu)
        {
            case 0:
                cout<<"Adios :("<<endl;
                break;
            case 1:
                agregarProducto();
                break;
            case 3:
                mostrar();
                break;
            case 4:
                modificarNombre();
                break;
            case 5:
                modificarCosto();
                break;
            case 6:
                eleminarProducto();
                break;
            default:
                break;   
        }
    }
    return 0;
}
#include<iostream>
using namespace std;

struct producto
{
    string nombre;
    float costo;
    int inventario;
};
// Función para agregar un producto al catálogo
void agregarProducto(producto *tienda, int tamanoTienda, int *contador)
{
    
    //si todavia hay espacio en el "almacen"
    if (*contador < tamanoTienda)
    {
        cout << "Nombre del producto que deseas agregar: " << endl;
        getline(cin, tienda[*contador].nombre);
        cout << "Costo del producto: " << endl;
        cin>>tienda[*contador].costo;
        cout<<"Cuantas unidades deseas agregar al inventario"<<endl;
        cin>>tienda[*contador].inventario;
        *contador = *contador + 1;
    }
    else
        cout << "Ya se llenó la lista" << endl;
}
int main()
{
    int contador = 0; //cuenta cuantos productos se han agregado a la tienda
    int contadorVenta = 0;
    int tamanoTienda=30; //determina cuantos productos puedo guardar
    producto tienda[tamanoTienda];

    int menu = 1;
    while (menu != 0)
    {
        cout << "1. Registrar un nuevo producto" << endl;
        cout << "2. Realizar venta" << endl;
        cout << "3. Imprimir catálogo de productos" << endl;
        cout << "4. Modificar descripción del producto" << endl;
        cout << "5. Modificar precio de un producto" << endl;
        cout << "6. Modificar inventario de un producto" << endl;
        cout << "7. Eliminar producto" << endl;
        cout << "0. Salir" << endl;
        cin >> menu;
        cin.ignore();
        switch (menu)
        {
        case 0:
            cout << "Adiós :(" << endl;
            break;
        case 1:
            agregarProducto(tienda, tamanoTienda,&contador);
            break;
        case 2:
            //creacionVenta(&contador, producto[1], producto[0], productos[2], productos[0], productos[1]);
            break;
        case 3:
            //mostrar(producto[0], productos[0], productos[1], contador);
            break;
        case 4:
            //modificarNombre(producto[0], productos[0], productos[1], contador);
            break;
        case 5:
            //modificarCosto(producto[0], productos[0], productos[1], contador);
            break;
        case 6:
           //eleminarProducto(producto[0], productos[0], productos[1], contador);
            break;
        case 7:
           //eleminarProducto(producto[0], productos[0], productos[1], contador);
            break;
        default:
            cout<<"esa no es una opcion pillin"<<endl;
            break;
        }
    }
    return 0;
}



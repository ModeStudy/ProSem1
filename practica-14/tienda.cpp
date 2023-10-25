#include<iostream>
using namespace std;

struct producto
{
    string nombre;
    float costo;
    int inventario;
};

struct ventaProducto
{
    string nombre;
    float costo, costoTotal;
    int cantidad;
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
void mostrar(producto *tienda, int tamanoTienda, int *contador)
{
    for (int i = 0; i < *contador; i++)
    {
        
        cout << i + 1 << "- "<< tienda[i].nombre << "\t$" << tienda[i].costo <<"\texistencia: "<<tienda[i].inventario << endl;
    }
}
void mostrar(producto *tienda, ventaProducto *listacompras, int tamanoTienda, int *contador, int *contadorVenta)
{
    bool productoDisponible;
    for (int i = 0; i < *contador; i++)
    {
        productoDisponible = true;
        for(int j= 0; j<*contadorVenta;i++)
        {
            if(tienda[i].nombre == listacompras[j].nombre)
            {
                productoDisponible = false;
                break;
            }
        }
        if(productoDisponible)
            cout << i + 1 << "- "<< tienda[i].nombre << "\t$" << tienda[i].costo <<"\texistencia: "<<tienda[i].inventario << endl;
    }
}

void eliminarProducto(producto *tienda, int tamanoTienda, int *contador)
{
    int indiceProducto;
    mostrar(tienda, tamanoTienda, contador);
    cout << "Cuál deseas eliminar: " << endl;
    cin >> indiceProducto;

    // Marcar el producto como "ELIMINADO" y establecer su costo a 0
    tienda[indiceProducto - 1].nombre = "ELIMINADO";
    tienda[indiceProducto - 1].costo = 0;
    tienda[indiceProducto -1].inventario = 0;
}

void modificarInventario(producto *tienda, int tamanoTienda, int *contador)
{
    int indiceProducto;
    mostrar(tienda, tamanoTienda, contador);
    cout << "De que producto deseas modificar el inventario: " << endl;
    cin >> indiceProducto;
    cout << "Cual es el nuevo valor de inventario: " << endl;
    cin >> tienda[indiceProducto - 1].inventario;
}

void modificarCosto(producto *tienda, int tamanoTienda, int *contador)
{
    int indiceProducto;
       mostrar(tienda, tamanoTienda, contador);
    cout << "Cuál costo deseas modificar: " << endl;
    cin >> indiceProducto;
    cout << "Qué precio deseas asignar: " << endl;
    cin >> tienda[indiceProducto - 1].costo;
}

// Función para modificar el nombre de un producto en el catálogo
void modificarNombre(producto *tienda, int tamanoTienda, int *contador)
{
    int indiceProducto;


    mostrar(tienda, tamanoTienda, contador);
    cout << "Cuál nombre deseas modificar: " << endl;
    cin >> indiceProducto;
    cout << "Qué nombre deseas asignar: " << endl;
    cin.ignore();
    getline(cin, tienda[indiceProducto - 1].nombre);
}

void creacionVenta(ventaProducto *listaCompras, producto *productos, int *contadorVenta, int *contador, int tamanoTienda)
{
    int cantidad, desicion;
    
        mostrar(productos, listaCompras, tamanoTienda, contador, contadorVenta);
        cout<<endl<<"Que producto deseas agregar"<<endl;
        cin>>desicion;
        cout<<"Cuantos deseas agregar ";
        cin>>cantidad;
        productos[desicion-1].inventario -= cantidad;
        listaCompras[*contadorVenta].nombre = productos[desicion-1].nombre;
        listaCompras[*contadorVenta].costo = productos[desicion-1].costo;
        listaCompras[*contadorVenta].cantidad = cantidad;
        listaCompras[*contadorVenta].costoTotal = listaCompras[*contadorVenta].costo*cantidad;
        cout<<"Cuenta total"<<endl;
        cout<<listaCompras[*contadorVenta].nombre<<endl;
        cout<<"$"<<listaCompras[*contadorVenta].costo<<endl;
        cout<<"cantidad "<<listaCompras[*contadorVenta].cantidad<<endl;
        cout<<"Total $"<<listaCompras[*contadorVenta].costoTotal<<endl;
        *contadorVenta=0;

}

int main()
{
    int contador = 0; //cuenta cuantos productos se han agregado a la tienda
    int contadorVenta = 0;
    int tamanoTienda=30; //determina cuantos productos puedo guardar
    producto tienda[tamanoTienda];
    ventaProducto ventas[tamanoTienda];

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
            creacionVenta(ventas, tienda, &contadorVenta ,&contador, tamanoTienda);
            break;
        case 3:
            mostrar(tienda, tamanoTienda, &contador);
            break;
        case 4:
            modificarNombre(tienda, tamanoTienda, &contador);
            break;
        case 5:
            modificarCosto(tienda, tamanoTienda, &contador);
            break;
        case 6:
           modificarInventario(tienda, tamanoTienda, &contador);
            break;
        case 7:
            eliminarProducto(tienda, tamanoTienda, &contador);
            break;
        default:
            cout<<"esa no es una opcion pillin"<<endl;
            break;
        }
    }
    return 0;
}
#include<iostream>
using namespace std;

// Función para agregar un producto al catálogo
void agregarProducto(string *nombre,float *costo,float *inventario,int *contador, int tamano)
{

    if (*contador < tamano)
    {

        cout << "Nombre del producto que deseas agregar: " << endl;
        getline(cin, *(nombre + *contador));
        cout << "Costo del producto: " << endl;
        cin >>*(costo + *contador);
        cout<<"Cuantas unidades deseas agregar al inventario"<<endl;
        cin>>*(inventario + *contador);
        *contador = *contador + 1;
    }
    else
        cout << "Ya se llenó la lista" << endl;
}

// Función para mostrar el catálogo de productos
void mostrar(string *nombre,float *costo,float *inventario,int contador)
{
    for (int i = 0; i < contador; i++)
    {
        
        cout << i + 1 << "- " << nombre[i] << " $" << costo[i] <<" existencia: "<<inventario[i] << endl;
    }
}

// Función para eliminar un producto del catálogo


void eleminarProducto(string *nombre,float *costo,float *inventario,int contador)
{
    int indiceProducto;
    mostrar(nombre, costo, inventario, contador);
    cout << "Cuál deseas eliminar: " << endl;
    cin >> indiceProducto;

    // Marcar el producto como "ELIMINADO" y establecer su costo a 0
    nombre[indiceProducto - 1] = "ELIMINADO";
    costo[indiceProducto - 1] = 0;
    inventario[indiceProducto -1] = 0;
}

// Función para modificar el costo de un producto en el catálogo
void modificarInventario(string *nombre,float *costo,float *inventario,int contador)
{
    int indiceProducto;
    mostrar(nombre, costo, inventario, contador);
    cout << "De que producto deseas modificar el inventario: " << endl;
    cin >> indiceProducto;
    cout << "Cual es el nuevo valor de inventario: " << endl;
    cin >> inventario[indiceProducto - 1];
}

void modificarCosto(string *nombre,float *costo,float *inventario,int contador)
{
    int indiceProducto;
    mostrar(nombre, costo, inventario, contador);
    cout << "Cuál costo deseas modificar: " << endl;
    cin >> indiceProducto;
    cout << "Qué precio deseas asignar: " << endl;
    cin >> costo[indiceProducto - 1];
}
// Función para modificar el nombre de un producto en el catálogo
void modificarNombre(string *nombre,float *costo,float *inventario,int contador)
{
    int indiceProducto;
    mostrar(nombre, costo, inventario, contador);
    cout << "Cuál nombre deseas modificar: " << endl;
    cin >> indiceProducto;
    cout << "Qué nombre deseas asignar: " << endl;
    cin.ignore();
    getline(cin, nombre[indiceProducto - 1]);
}
// Función para realizar una venta
void finalizarVentaSistema(string *productoVenta, float *cantidadVenta)
{
    for(int i= 0; i<30; i++){
        productoVenta[i] = "";
        cantidadVenta[i] = 0;
    }
}

void cobroVenta(int *contadorVenta, string *productoVenta, float *cantidadVenta)
{
    float costoTotal = 0;
    cout << "Tu cuenta es: " << endl;
    for (int i = 0; i < *contadorVenta; i++)
    {
        cout << productoVenta[i] << " total $" << cantidadVenta[i] << endl;
        costoTotal += cantidadVenta[i];
    }
    cout << "Importe: $" << costoTotal << endl;
}

void mostrarProductosDisponibles(int *contadorVentas, string *NombresProductos, string *NombresElegidos, float *costo, float *inventario)
{
    bool disponible;
    for(int i = 0; i<30; i++)
    {
        disponible = true;
        for(int j = 0; j<30-*contadorVentas; j++)
        {
            if(NombresProductos[i]== "")
            {
                disponible = false;
                break;
            }
            else if(NombresProductos[i] == NombresElegidos[j] || inventario[i] == 0)
            {
                cout<<i+1<<"- "<<"Producto agotado"<<endl;
                disponible = false;
                break;
            }
        }
        if(disponible)
        {
            cout << i + 1 << "- " << NombresProductos[i] << " $" << costo[i] << endl;
        }
    }
}

// Función para crear una venta
void creacionVenta(int *contador, string *nombrePVender, string *productosNombres, float *cantidad, float *costos, float *inventario)
{
    int indiceProducto, cantidades, nuevoProducto, contadorVentas = 0;
    do
    {
        if (contadorVentas < 30)
        {
            if(contadorVentas == *contador)
            {
                cout<<"ya no hay mas productos disponibles"<<endl;
                nuevoProducto = 0;
            }
            else{
            mostrarProductosDisponibles(&contadorVentas, productosNombres, nombrePVender, costos, inventario);
            cout << "Qué deseas comprar: " << endl;
            cin >> indiceProducto;
            cout << "Cuántos deseas comprar: " << endl;
            cin >> cantidades;
            if(inventario[indiceProducto-1] >=cantidades && inventario[indiceProducto-1] != 0) //si tenemos inventario se hace la compra
            {
            inventario[indiceProducto-1] = inventario[indiceProducto-1] - cantidades; //quitando del inventario lo solicitado
            nombrePVender[contadorVentas] = productosNombres[indiceProducto - 1]; //nombre del producto se registra
            cantidad[contadorVentas] = cantidades * costos[indiceProducto - 1]; //cantidad * costo
            contadorVentas++;
            }
            else{
                cout<<"no contamos con esa cantidad, no se agrego el producto a la cuenta"<<endl;

            }
            cout << "Deseas agregar un nuevo producto a la compra 1-Si / 2-No" << endl;
            cin >> nuevoProducto;
            }
            
        }
        else
        {
            cout << "Ya se seleccionaron todos los productos" << endl;
            nuevoProducto = 0;
        }
    } while (nuevoProducto == 1);
    cobroVenta(&contadorVentas, nombrePVender, cantidad);
    finalizarVentaSistema(nombrePVender, cantidad); //reinicia las variables a sus estado original
}

int main()
{
    string producto[2][30]; // 0: producto 1: producto elegido para la venta
    float productos[3][30]; // 0: costo, 1: inventario  2: cantidad venta
    int contador = 0; //cuenta cuantos productos se han agregado a la tienda
    int contadorVenta = 0;
    int tamanoTienda=30; //determina cuantos productos puedo guardar

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
            agregarProducto(producto[0], productos[0], productos[1], &contador, tamanoTienda);
            break;
        case 2:
            creacionVenta(&contador, producto[1], producto[0], productos[2], productos[0], productos[1]);
            break;
        case 3:
            mostrar(producto[0], productos[0], productos[1], contador);
            break;
        case 4:
            modificarNombre(producto[0], productos[0], productos[1], contador);
            break;
        case 5:
            modificarCosto(producto[0], productos[0], productos[1], contador);
            break;
        case 6:
           eleminarProducto(producto[0], productos[0], productos[1], contador);
            break;
        case 7:
           eleminarProducto(producto[0], productos[0], productos[1], contador);
            break;
        default:
            cout<<"esa no es una opcion pillin"<<endl;
            break;
        }
    }
    return 0;
}

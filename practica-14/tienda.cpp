#include<iostream>
using namespace std;

string producto[30];
float costo[30];
int contador = 0;

// Declaraciones de arrays de venta
string productoVenta[30];
int cantidadVenta[30];
int contadorVenta = 0;

// Función para agregar un producto al catálogo
void agregarProducto()
{
    if (contador < 30)
    {
        cout << "Nombre del producto que deseas agregar: " << endl;
        getline(cin, producto[contador]);
        cout << "Costo del producto: " << endl;
        cin >> costo[contador];
        cin.ignore();
        contador++;
    }
    else
        cout << "Ya se llenó la lista" << endl;
}

// Función para mostrar el catálogo de productos
void mostrar()
{
    for (int i = 0; i < contador; i++)
    {
        cout << i + 1 << "- " << producto[i] << " $" << costo[i] << endl;
    }
}

// Función para eliminar un producto del catálogo

void eleminarProducto()
{
    int indiceProducto;
    mostrar();
    cout << "Cuál deseas eliminar: " << endl;
    cin >> indiceProducto;

    // Marcar el producto como "ELIMINADO" y establecer su costo a 0
    producto[indiceProducto - 1] = "ELIMINADO";
    costo[indiceProducto - 1] = 0;
}

// Función para modificar el costo de un producto en el catálogo
void modificarCosto()
{
    int indiceProducto;
    mostrar();
    cout << "Cuál costo deseas modificar: " << endl;
    cin >> indiceProducto;
    cout << "Qué precio deseas asignar: " << endl;
    cin >> costo[indiceProducto - 1];
}

// Función para modificar el nombre de un producto en el catálogo
void modificarNombre()
{
    int indiceProducto;
    mostrar();
    cout << "Cuál nombre deseas modificar: " << endl;
    cin >> indiceProducto;
    cout << "Qué nombre deseas asignar: " << endl;
    cin.ignore();
    getline(cin, producto[indiceProducto - 1]);
}

// Función para realizar una venta
void finalizarVentaSistema()
{
    contadorVenta = 0;
    for(int i= 0; i<30; i++){
        productoVenta[i] = "";
        cantidadVenta[i] = 0;
    }
}
void cobroVenta()
{
    float costoTotal = 0;
    cout << "Tu cuenta es: " << endl;
    for (int i = 0; i < contadorVenta; i++)
    {
        cout << productoVenta[i] << " total $" << cantidadVenta[i] << endl;
        costoTotal += cantidadVenta[i];
    }
    cout << "Importe: $" << costoTotal << endl;
}

void mostrarProductosDisponibles()
{
    bool disponible;
    for(int i = 0; i<30; i++)
    {
        disponible = true;
        for(int j = 0; j<30-contadorVenta; j++)
        {
            if(producto[i] == productoVenta[j] && producto[i]== "")
            {
                cout<<i+1<<"- "<<"Inexistente"<<endl;
                disponible = false;
                break;
            }
            else if(producto[i] == productoVenta[j])
            {
                cout<<i+1<<"- "<<"Producto agotado"<<endl;
                disponible = false;
                break;
            }
        }
        if(disponible)
        {
            cout << i + 1 << "- " << producto[i] << " $" << costo[i] << endl;
        }
    }
}

// Función para crear una venta
void creacionVenta()
{
    int indiceProducto, cantidad, nuevoProducto;
    do
    {
        if (contadorVenta < 30)
        {
            if(contadorVenta == contador)
            {
                cout<<"ya no hay mas productos disponibles"<<endl;
                nuevoProducto = 0;
            }
            else{
            mostrarProductosDisponibles();
            cout << "Qué deseas comprar: " << endl;
            cin >> indiceProducto;
            cout << "Cuántos deseas comprar: " << endl;
            cin >> cantidad;

            // Registrar el producto y el costo total de la compra
            productoVenta[contadorVenta] = producto[indiceProducto - 1];
            cantidadVenta[contadorVenta] = cantidad * costo[indiceProducto - 1];
            contadorVenta++;

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
    cobroVenta();
    finalizarVentaSistema(); //reinicia las variables a sus estado original
}

int main()
{
    int menu = 1;
    while (menu != 0)
    {
        cout << "1. Registrar un nuevo producto" << endl;
        cout << "2. Realizar venta" << endl;
        cout << "3. Imprimir catálogo de productos" << endl;
        cout << "4. Modificar descripción del producto" << endl;
        cout << "5. Modificar precio de un producto" << endl;
        cout << "6. Eliminar producto" << endl;
        cout << "0. Salir" << endl;
        cin >> menu;
        cin.ignore();
        switch (menu)
        {
        case 0:
            cout << "Adiós :(" << endl;
            break;
        case 1:
            agregarProducto();
            break;
        case 2:
            creacionVenta();
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

#include<iostream>
using namespace std;

int* inputArray(int*);
int cuadradoPerfecto(int);

int main()
{
    int tamano, valorEvaluar, residuo;
    int *numero =inputArray(&tamano);
    int raizCuadrada[tamano];
    if(tamano% 2 == 0)
    {
        valorEvaluar = numero[0]*10 + numero[1];
    }
    else{
        valorEvaluar = numero[0];
    }
    //obtengo el primer digito de la raiz
    raizCuadrada[0] = cuadradoPerfecto(valorEvaluar);
    residuo = valorEvaluar -(raizCuadrada[0]*raizCuadrada[0]);

    cout<<"La raiz cuadrada exacta mas cercana es: "<<raizCuadrada[0]<<endl;

    cout<<"El residuo es: "<<residuo<<endl;

    
    
    delete[] numero;
    return 0;
}

int cuadradoPerfecto(int valorEvaluar)
{
    int valor=1;
    while(valorEvaluar>valor*valor)
    {
        valor++;
    }
    if(valorEvaluar<valor*valor){
        valor--;
    }
    return valor;
}

int* inputArray(int *ta)
{
    string raiz, numerito;
    int tamano;

    //determinando el numero y la cantidad de digitos que cuenta
    cout<<"De que numero deseas obtener la raiz cuadrada :)"<<endl;
    cin>>raiz;
    tamano = raiz.length();
    *ta = tamano;

    //creando el array en el heap para que no se borre al finalizar la funcion
    int *numero = new int[tamano];

    //rellenando el array de enteros con el string
    for(int i=0; i<tamano; i++)
    {
        numerito = raiz[i];
        numero[i] = stoi(numerito);
    }

    //solucion temporal para que no moleste al compilar -- no tiene utilidad
    return numero;
}
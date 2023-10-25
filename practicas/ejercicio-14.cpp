#include<iostream>
using namespace std;

int potencia(int, int);

int main()
{
    string numeroTexto,aux;
    int tamanoNumero, suma=0;
    cout<<"Dame un numerito y te dire si es Amstrong :D"<<endl;
    cin>>numeroTexto;
    tamanoNumero = numeroTexto.length();
    int numero[tamanoNumero];
    for(int i=0; i<tamanoNumero; i++)
    {
        aux = (numeroTexto[i]);
        numero[i] = stoi(aux);
    }
    for(int i=0; i<tamanoNumero;i++)
    {
        numero[i] = potencia(numero[i], tamanoNumero);
        suma += numero[i];
    }
    if(suma == stoi(numeroTexto))
    {
        cout<<"tu numero es Amstrong :D"<<endl;
    }
    else{
        cout<<"Tu numero no es amnstrong"<<endl;
    }
    return 0;
}

int potencia(int numero, int potencia)
{
    int resultado=1;
    for(int i=1; i<=potencia; i++)
    {
        resultado *= numero;
    }
    return resultado;
}
#include<iostream>
using namespace std;

bool esPar(int num)
{
    return num % 2 == 0;
}

int cubo(int num)
{
    return num*num*num;
}

int potencia(int num, int potencia)
{
    int resultado = 1;
    for(int i= 1; i<=potencia; i++)
    {
        resultado *= num;
    }
    return resultado;
}

int main()
{
    int input,potenciaNum;
    cout<<"dame un numerito"<<endl;
    cin>>input;
    if(esPar(input))
        cout<<"el numero es par"<<endl;
    else
        cout<<"el numero no es par"<<endl;
    cout<<"el cubo de "<<input<<" es: "<<cubo(input)<<endl;

    cout<<"a ese numero que potencia le deseas agregar"<<endl;
    cin>>potenciaNum;
    cout<<"la potencia de: "<<input<<" es "<<potencia(input, potenciaNum)<<endl;
    return 0;
}


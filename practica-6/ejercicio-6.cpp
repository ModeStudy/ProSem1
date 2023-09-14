#include<iostream>
using namespace std;


int main()
{
    int misNumeros[10];
    int filtro=0, sumatoria = 0, tamano, longitud;
    
    for(int i = 0; i<10; i++)
    {
        cout<<"Por favor dame un número :D"<<endl;
        cin>>misNumeros[i];
        if(misNumeros[i] % 2 == 0)
        {
            filtro++;
        }
    }

    int misNumerosPares[filtro];
    tamano = sizeof(misNumerosPares) / sizeof(misNumerosPares[0]);

    int index=0;

    for(int i = 0; i<10; i++)
    {
        if(misNumeros[i] % 2 == 0)
        {
            misNumerosPares[index] = misNumeros[i];
            index++;
        }
    }


    for(int i = 0; i<tamano; i++)
    {
        sumatoria += misNumerosPares[i];
    }
    cout<<"La sumatoria de los números pares fue: "<<sumatoria<<endl;

    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    float suma=0;
    int contador=0, breaker=1, lentador;
    cout<<"dame numeritos"<<endl;
    while (breaker != 0)
    {
        cin>>lentador;
        suma += lentador;
        contador++;
        if(lentador==0)
        {
            contador--;
            breaker = 0;
        }
            
    }
    
    cout<<"el promedo redondeado de los números ingresados fue: "<<suma/contador<<endl;

    return 0; 
}
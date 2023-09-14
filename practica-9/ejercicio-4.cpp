#include<iostream>
using namespace std;

int main()
{
    float suma=0;
    int breaker=1, lentador;
    cout<<"dame numeritos"<<endl;
    while (breaker != 0)
    {
        cin>>lentador;
        suma += lentador;
        if(lentador==0)
        {
            breaker = 0;
        }
            
    }
    
    cout<<"La sumatoria de los numeros ingresados fue: "<<suma<<endl;

    return 0; 
}
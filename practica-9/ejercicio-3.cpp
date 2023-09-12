#include<iostream>
using namespace std;

int main()
{
    bool primo = true;//asumimos que todos los numeros son primos
    int contador=0;

    for(int i; i<i+1;i++)
    {
        for(int j = 2; j<i; j++)
        {
            if(i % j == 0)
            {
                primo = false;
                break;
            }
        }
        if(primo)
        {
            cout<<i<<endl;
            contador++;
            if(contador == 100)
                break;
        }
    }
    return 0;
}
#include<iostream>
using namespace std;

int tamanoArray(int);

int main()
{
    //Programa que pida al usuario un número y muestre su representación en binario.
    int num, tamano;
    cout<<"Dame un numero"<<endl;
    cin>>num;
    int binario[num]; 
    tamano = tamanoArray(num);
    for(int i= 0; i<tamano; i++)
    {
        binario[i] = num % 2;
        num = num / 2;
    }
    for(int i=tamano-1;i>=0;i--)
    {
        cout<<binario[i]<<" ";
    }
    cout<<endl;
    return 0;
}

int tamanoArray(int num)
{
    int nivel=1, contador = 0;
    do
    {
        contador++;
        nivel *= 2;
        cout<<nivel<<endl;
    } while (nivel <= num);
    if(nivel == num)
        contador += 1;
    cout<<"contador vale: "<<contador<<endl;
    return contador;
}
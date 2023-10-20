#include<iostream>
using namespace std;

int main()
{
    //Programa que solicite al usuario un número y muestre si es par o impar.
    int num1;
    cout<<"Dame un numero y si te dire si es par o impar"<<endl;
    cin>>num1;

    if(num1 % 2 == 0)
        cout<<"es par"<<endl;
    else
        cout<<"no es par"<<endl;
}
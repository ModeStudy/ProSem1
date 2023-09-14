#include<iostream>

using namespace std;

int main()
{
    string hola, reves;
    int tamano, posicionR=0;

    cout<<"dame una palabra"<<endl;
    cin>>hola;
    reves = hola;
    tamano = hola.length()-1;
    
    for(int i= tamano; i>=0; i--)
    {
        reves[posicionR] = hola[i];
        posicionR++;
    }
    cout<<reves<<endl;

    return 0;
}
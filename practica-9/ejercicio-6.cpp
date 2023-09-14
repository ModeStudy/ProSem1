#include<iostream>

using namespace std;

int main()
{
    string hola;
    int tamano;

    cout<<"dame una palabra"<<endl;
    cin>>hola;
    tamano = hola.length();
    
    cout<<"la palabra tiene "<<tamano<<" letras"<<endl;

    return 0;
}
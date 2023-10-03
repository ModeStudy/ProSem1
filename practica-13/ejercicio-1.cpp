#include<iostream>
using namespace std;

int main()
{
    int numeros[10];
    for(int i=0; i<sizeof(numeros)/sizeof(numeros[0]); i++)
    {
        cout<<"give your number :D"<<endl;
        cin>>numeros[i];
    }
    cout<<"los numeros son"<<endl;
    for(int i=0; i<sizeof(numeros)/sizeof(numeros[0]);i++)
    {
        cout<<numeros[i]<<endl;
    }
    return 0;
}
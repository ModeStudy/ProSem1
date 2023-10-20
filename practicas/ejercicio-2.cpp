#include<iostream>
using namespace std;

int main()
{
    //Programa que pida al usuario un número y muestre su tabla de multiplicar del 1 al 10.
    int num;
    cout<<"dame un numerito :D"<<endl;
    cin>>num;
    for(int i=1; i<11; i++)
    {
        cout<<i<<" x "<<num<<" = "<<num*i<<endl;
    }
    return 0;
}
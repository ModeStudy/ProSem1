#include<iostream>
using namespace std;
//Programa que pida al usuario un número y muestre su factorial.
int main()
{
    int num, fact = 1;

    cout<<"Dame un numero y te muestro el factorial"<<endl;
    cin>>num;

    for(int i = num; i>0; i--)
    {
        fact *= i;
    }
    cout<<"El factorial es de: "<<fact<<endl;


}
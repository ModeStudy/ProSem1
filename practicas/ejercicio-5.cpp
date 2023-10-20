#include<iostream>
using namespace std;

int main()
{
    //Programa que solicite al usuario un número y muestre si es primo o no.
    int num;
    bool primo = true; 
    cout<<"Dame un numero y te digo si es primo o no :D"<<endl;
    cin>>num;
    for(int i=2; i<num; i++)
    {
        if(num % i == 0)
        {
            primo=false;
            break;
        }
            
    }
    if(primo)
        cout<<"Es primo"<<endl;
    else
        cout<<"No es primo"<<endl;
    return 0;

}
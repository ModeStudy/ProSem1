#include<iostream>
using namespace std;
//determinar si un numero es perfecto :O
int main()
{
    int num, suma=0;
    
    cout<<"Dame un numero y te digo si es PERFECTO :O"<<endl;
    cin>>num;
    for(int i=num-1; i>0; i--)
    {
        if(num % i == 0)
            suma += i;
        if(suma == num)
        {
            cout<<"Tu numero es P E R F E C T O como tu :D"<<endl; 
        }
    }

    if(num < suma || num>suma)
        cout<<" Tu numero no es perfecto como la vida ;("<<endl;
    return 0;
}
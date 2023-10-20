#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"Dame el primer número"<<endl;
    cin>>num1;
    cout<<"Dame el segundor número"<<endl;
    cin>>num2;
    if(num2>num1)
        cout<<"es mayor "<<num2<<endl;
    else if(num1>num2)
        cout<<"es mayor "<<num1<<endl;
    else
        cout<<"los dos son iguales"<<endl;
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"Ingrese un número"<<endl;
    cin>>num1;
    cout<<"Ingrese un número"<<endl;
    cin>>num2;

    if(num1 == num2)
    {
        cout<<"son iguales"<<endl;
    }
    else
    {
        cout<<"son diferentes"<<endl;
    }
    return 0;
}
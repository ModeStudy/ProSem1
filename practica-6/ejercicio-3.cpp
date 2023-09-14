#include<iostream>
using namespace std;

int main()
{
    int num1;

    cout<<"ingrese un número :D"<<endl;
    cin>>num1;

    if(num1 % 2==0)
    {
        cout<<"El número "<<num1<<" es par"<<endl;
    }
    else{
        cout<<"El número "<<num1<<" es impar"<<endl;
    }
    return 0;
}
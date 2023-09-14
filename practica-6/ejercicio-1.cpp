#include<iostream>

using namespace std;

int main()
{
    int num = 10;

    if(num>10){
        cout<<"El número "<<num<<" Es mayor a 10"<<endl;
    }
    else if(num==10){
        cout<<"El número "<<num<<" Es igual a 10"<<endl;
    }
    else
    {
        cout<<"El número "<<num<<" Es menor a 10"<<endl;
    }

    return 0;
}
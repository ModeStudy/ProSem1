#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Ingresa el numero que desees saber si es multiplo de 3"<<endl;
    cin>>n;

    if(n%3 == 0)
    {
        cout<<"El número "<<n<<" es divisible entre 3"<<endl;
    }
    else
    {
        cout<<"El número "<<n<<" no es divisible entre 3"<<endl;
    }
    return 0;
}
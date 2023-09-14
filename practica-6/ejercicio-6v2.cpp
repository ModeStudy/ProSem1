#include<iostream>
using namespace std;

int main()
{
    int sumatoria= 0, num;
    for(int i = 0; i<10; i++)
    {   

        cout<<"Dame un numero"<<endl;
        cin>>num;

        if(num % 2 == 0)
        {
            sumatoria += num;
        }
    }

    cout<<"La sumatoria de los numeros pares es: "<<sumatoria<<endl;
    return 0;
}
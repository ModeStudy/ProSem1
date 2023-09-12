#include<iostream>
using namespace std;

int main()
{
    bool primo = false;
    int num;
    cout<<"Dame un numero :D"<<endl;
    cin>>num;

    for(int i= 2; i<num; i++)
    {
        if(num % i == 0){
            primo = true;
            break;
        }
    }

    if(primo) //si la variable es true es porque detecto el bucle que es primo
        cout<<"no es primo"<<endl;
    else
        cout<<"es primo"<<endl;
    return 0;
}
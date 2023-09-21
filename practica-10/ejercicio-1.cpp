#include<iostream>
using namespace std;

int main()
{   
    int numero;
    do{
        bool primo = true;
        
        cout<<"dame un númerito :D"<<endl;
        cin>>numero;
        for(int i = 2; i<numero; i++)
        {
            if(numero%i == 0)
            {
                primo = false;
                break;
            }
        }
        if(primo && numero != 0)
        {
            cout<<"es primo"<<endl;
        }else if(numero != 0){
            cout<<"no es primo"<<endl;
        }
    }while(numero != 0);
    return 0;
}
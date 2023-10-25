#include<iostream>
using namespace std;

int main()
{
    //los numeros primos entre 2 numeros
    int num1, num2;
    bool primo;
    cout<<"Dame un numero: ";
    cin>>num1;
    cout<<"Dame un numero mayor: ";
    cin>>num2;
    for(int numeroActual= num1; numeroActual<=num2; numeroActual++)
    {
        primo = true;
        for(int comprobador=2; comprobador<numeroActual; comprobador++)
        {
            if(numeroActual % comprobador == 0){

                primo=false;
                break;
               // cout<<"numero actual "<<numeroActual<<"comprobador: "<<comprobador<<endl;
            }
        }
        if(primo){
            cout<<numeroActual<<" ";
        }
    }
    cout<<endl;
    return 0;
}
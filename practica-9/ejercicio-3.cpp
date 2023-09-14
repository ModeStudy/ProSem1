#include<iostream>
using namespace std;

int main()
{
   
    bool primo = true;
    int primoActual = 1, numeroActual=1;
    
    while (primoActual < 101) //primoActual cuenta cuantos primos se han encontrado y si se han encontrado mas de 100 primos se detiene
    {
        
        for(int comprobador = 2; comprobador<numeroActual; comprobador++) //por cada número comprueba si es primo o no
        {
            if(numeroActual % comprobador == 0)
            {
                primo = false;
                break;
            }
        }
       
        if(primo)
        {
            cout<<numeroActual<<endl;
            primoActual++;
        }

        primo = true;
        numeroActual++;
    }
    

    return 0;
}
#include<iostream>
using namespace std;

int potencia(int numero, int exponente);
bool esPrimo(int num);

int main()
{

    int opc = -1, num1, num2;
    do
    {
    cout<<endl<<endl;
    cout<<"Calculadora"<<endl;
    cout<<"1- Suma"<<endl;
    cout<<"2- Resta"<<endl;
    cout<<"3- Multiplicación"<<endl;
    cout<<"4- Division"<<endl;
    cout<<"5- potencia"<<endl;
    cout<<"6- Primo"<<endl;
    cout<<"0- Salir"<<endl;
    cout<<"elige una opcion :D"<<endl;
    cin>>opc;

    switch (opc)
    {
    case 1:
        cout<<"Dame un numerito :D"<<endl;
        cin>>num1;
        cout<<"Dame otro numerito :D"<<endl;
        cin>>num2;
        cout<<"La suma es: "<<num1 +num2<<endl;
        break;
    case 2:
        cout<<"Dame un numerito :D"<<endl;
        cin>>num1;
        cout<<"Dame otro numerito :D"<<endl;
        cin>>num2;
        cout<<"La resta es: "<<num1 -num2<<endl;
        break;
    case 3:
        cout<<"Dame un numerito :D"<<endl;
        cin>>num1;
        cout<<"Dame otro numerito :D"<<endl;
        cin>>num2;
        cout<<"La multiplicacion es: "<<num1*num2<<endl;
        break;
    case 4:
        cout<<"Dame un numerito :D"<<endl;
        cin>>num1;
        cout<<"Dame otro numerito :D"<<endl;
        cin>>num2;
        cout<<"La division es: "<<num1/num2<<endl;
        break;
    case 5:
        cout<<"Que numero deseas elevar"<<endl;
        cin>>num1;
        cout<<"A que potencia lo deseas elevar"<<endl;
        cin>>num2;
        cout<<"El resultado es: "<<potencia(num1,num2)<<endl;
        break;
    case 6:
        cout<<"Dame un numerito :D"<<endl;
        cin>>num1;
        if(esPrimo(num1))
            cout<<"es primo"<<endl;
        else
            cout<<"no es primo"<<endl;
        break;
    case 0:
        cout<<"ok tabien nos vemos :("<<endl;
        break;
    default:
        cout<<"esa no es una opcion pillin :O"<<endl;
        break;
    }

    } while (opc != 0);
    return 0;
}

int potencia(int numero, int exponente)
{
        int resultado = 1;
        for(int i = 1; i<=exponente;i++)
        {
            resultado *= numero;
        }

        return resultado;
}

bool esPrimo(int num)
{
    bool primo = true;
    for(int i=2; i<num;i++)
    {
        if(num%i == 0)
        {
            primo = false; 
            break;
        }
            
    }
    return primo;
}
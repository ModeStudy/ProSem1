#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"de que tamaño quieres tu arbol"<<endl;
    cin>>num;



    for(int i = 1; i<=num; i++)
    {
        int rellenoActual = num-i;//obtengo cuanto relleno me falta para "centrarlo"
        for(int rellenador = 1; rellenador<=rellenoActual; rellenador++)//imprime espacios para centrar los asteriscos
        {   
            cout<<" ";
        }
        for(int j = 1; j<=i;j++)
        {
            cout<<"#"<<" ";
        }
        cout<<endl;
    }

    for(int i = 1; i<=2; i++)
    {
        int rellenadorTronco = num - 2;
        for(int rellenador = 1; rellenador<=rellenadorTronco; rellenador++)
        {
            cout<<" ";
        }
        for(int j = 1; j<=2; j++)
        {
            cout<<"#"<<" ";
        }
        cout<<endl;
    }
    return 0;
}
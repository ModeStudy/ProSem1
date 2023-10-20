#include<iostream>
using namespace std;

int main()
{
    //Programa que pida al usuario un número y calcule la suma de los números enteros desde 1 hasta ese número.
    int num,sumatoria = 0;
    cout<<"dame un numerito :D"<<endl;
    cin>>num;
    for(int i=1; i<=num; i++)
    {
        sumatoria += i;
    }
    cout<<"La suma desde 1 hasta "<<num<<" es: "<<sumatoria<<endl;
    return 0;
}
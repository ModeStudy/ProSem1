#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"de que numero deseas obtener la tabla de multiplicar"<<endl;
    cin>>num;

    for(int i = 1; i<=10; i++)
    {
        cout<<num<<"x"<<i<<"="<<num*i<<endl;
    }
    return 0;
}
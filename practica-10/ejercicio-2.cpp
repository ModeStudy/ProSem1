#include<iostream>
using namespace std;

int main()
{
    int num = 1,sumatoria = 0;
    cout<<"dame numeritos"<<endl;
    while (num != 0)
    {
        cin>>num;
        if(!(num % 2 == 0))
        {
            sumatoria += num;
        }
    }
    cout<<"la suma de los numeros impares fue: "<<sumatoria<<endl;
    return 0;
}
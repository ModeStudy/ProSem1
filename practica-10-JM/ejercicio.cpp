#include<iostream>
using namespace std;
int main()
{
    int num;
    int cont=0;
    while(num>0)
    {
        cout<<"Dame un numero: ";
        cin>>num;
        for(int i=1;i<=num;i++)
        {
        if(num%i==0)
            {
                cont++;
            }
            if(cont==2)
            {
                cout<<num<<endl;
            }
        }
    }
    return 0;
}
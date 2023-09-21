#include<iostream>
using namespace std;

int main()
{
    bool primo;
    for(int i = 10; i<=20; i++)
    {
        primo = true;
        for(int j = 2; j<i; j++)
        {
            if(i % j == 0)
            {
                primo=false;
                break;
            }
        }
        if(primo)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
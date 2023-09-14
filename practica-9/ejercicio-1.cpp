#include<iostream>
using namespace std;

int main()
{
    int num;
    bool primo = true;

    cout<<"dame un numerito :D"<<endl;
    cin>>num;
    for(int i = 2; i<num;i++)
    {
        if(num % i == 0)
        {
            primo = false;
            break;
        }
    }

    if(primo)
    {
        cout<<"es primo"<<endl;
    }
    else{
        cout<<"no es primo"<<endl;
    }
    return 0;
}
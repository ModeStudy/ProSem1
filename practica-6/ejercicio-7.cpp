#include<iostream>
using namespace std;

int main()
{
    int num;
    int primo = 1;
    cout<<"give me a number :D"<<endl;
    cin>>num;

    for(int i = 2; i<num; i++)
    {
        if(num % i == 0)
        {
            cout<<"El número no es primo"<<endl;
            primo = 2;

            break;
        }
    }
          if(primo == 1)
          {
            cout<<"El numero es primo"<<endl;

          } 

    return 0;
}
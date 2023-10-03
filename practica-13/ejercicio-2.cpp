#include<iostream>
#include<string>
using namespace std;
    string nombres[3];


int main()
{
    for(int i=0; i<sizeof(nombres)/sizeof(nombres[0]); i++)
    {
        cout<<"dame tu nombre: :D"<<endl;
        cin>>nombres[i];
    }
    cout<<"los nombres ingresados son"<<endl;
    for(int i=0; i<sizeof(nombres)/sizeof(nombres[0]); i++)
    {
        cout<<nombres[i]<<endl;
    }
    return 0;
}
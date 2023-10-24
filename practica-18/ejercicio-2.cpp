#include<iostream>
using namespace std;

struct date
{
    int day, month, year;
};


int main()
{
    int tamano=2;
    date dates[tamano];

    for(int i=0;i<tamano;i++)
    {
        cout<<"¿Que dia es hoy?"<<endl;
        cin>>dates[i].day;
        cout<<"¿En que mes estamos?"<<endl;
        cin>>dates[i].month;
        cout<<"Que year es hoy:)"<<endl;
        cin>>dates[i].year;
    }

    for(int i=0;i<tamano;i++)
    {
        cout<<"----------"<<endl;
        cout<<"Day "<<dates[i].day<<endl;
        cout<<"month "<<dates[i].month<<endl;
        cout<<"year "<<dates[i].year<<endl;
    }

    return 0;
}
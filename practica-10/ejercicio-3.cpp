#include<iostream>
using namespace std;

int main()
{
    int numeroHecho = 1, numeroActual= 1;
    while (numeroHecho < 11)
    {
        if(!(numeroActual % 2 == 0) && numeroActual % 7 == 0)
        {
            cout<<numeroActual<<endl;
            numeroHecho++;
        }
        numeroActual++;
    }
    
    return 0;
}
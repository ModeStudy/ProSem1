#include<iostream>
using namespace std;

int main()
{
    int desde = 1, hasta = 19;

    if(desde % 2 != 0)
        desde += 1;
    if(hasta % 2 != 0)
        hasta -= 1;
    for(int i = desde; i<=hasta; i++)
    {
            cout<<i<<endl;
            i++;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(y>x && y%x==0)
    {
        cout<<"Sao Multiplos"<<endl;
    }
    else if(y<x && x%y==0)
    {
        cout<<"Sao Multiplos"<<endl;
    }

    else
    {
        cout<<"Nao sao Multiplos"<<endl;
    }
}

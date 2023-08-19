#include<iostream>
using namespace std;
main(void)
{
    int x,y,m,d;
    cin>>x;
    y=x/365;
    x=x%365;
    m=x/30;
    d=x%30;
    cout<<y<<" ano(s)"<<endl<<m<<" mes(es)"<<endl<<d<<" dia(s)"<<endl;

}



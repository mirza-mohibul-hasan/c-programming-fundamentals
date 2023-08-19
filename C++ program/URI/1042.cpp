#include<iostream>
using namespace std;
int main()
{
    int x,y,z,t1,t2,t3,f1,f2,f3;
    cin>>x>>y>>z;
    t1=x;
    t2=y;
    t3=z;
    if(t1>t2&&t1>t3)
    {
        if(t2>t3)
        {
            f1=t1;
            f2=t2;
            f3=t3;
        }
        else
        {
            f1=t1;
            f2=t3;
            f3=t2;
        }
    }
    else if(t2>t1&&t2>t3)
    {
        if(t1>t3)
        {
            f1=t2;
            f2=t1;
            f3=t3;
        }
        else
        {
            f1=t2;
            f2=t3;
            f3=t1;
        }
    }
    else if(t3>t1&&t3>t2)
    {
        if(t1>t2)
        {
            f1=t3;
            f2=t1;
            f3=t2;
        }
        else
        {
            f1=t3;
            f2=t2;
            f3=t1;
        }
    }
    cout<<f3<<endl<<f2<<endl<<f1<<endl;
    cout<<endl;
    cout<<x<<endl<<y<<endl<<z<<endl;
}

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float x,n,i;
    int p;
    cin>>x;

    if(x>=0.0 && x<=400.0)
    {
        p=15;
        i=x*.15;
        n=x+i;
    }
        if(x>=400.01 && x<=800.0)
    {
        p=12;
        i=x*.12;
        n=x+i;
    }
        if(x>=800.01 && x<=1200.0)
    {
        p=10;
        i=x*.10;
        n=x+i;
    }
        if(x>=1200.01 && x<=2000.0)
    {
        p=7;
        i=x*.07;
        n=x+i;
    }
        if(x>2000.0)
    {
        p=4;
        i=x*.04;
        n=x+i;
    }

       cout<<showpoint<<fixed<<setprecision(2)<<"Novo salario: "<<n<<endl;
       cout<<showpoint<<fixed<<setprecision(2)<<"Reajuste ganho: "<<i<<endl;
       cout<<"Em percentual: "<<p<<" %"<<endl;
}

#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,d,x,y;
    cin>>a>>b>>c;;
    d=(b*b)-(4*a*c);
    if(d<0||a==0)
    {
        cout<<"Impossivel calcular"<<endl;
    }
    else
        {
            x=(-b+sqrt(d))/(a+a);
            y=(-b-sqrt(d))/(a+a);
            cout<<fixed<<setprecision(5);
        cout<<"R1 = "<<x<<endl;
        cout<<"R2 = "<<y<<endl;
        }
}

#include<iostream>
#include<iomanip>
using namespace std;
main(void)
{
    float x,y,z;
    cin>>x>>y>>z;
    if(x+y>z && y+z>x && x+z>y)
    {
        cout<<"Perimetro = "<<fixed<<setprecision(1)<<x+y+z<<endl;
    }
    else
    {
        cout<<"Area = "<<fixed<<setprecision(1)<<(x+y)*z/2.0<<endl;
    }
}

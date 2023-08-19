#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int c1,c2,u1,u2;
    float p1,p2,t;

    cin>>c1>>u1>>p1;
    cin>>c2>>u2>>p2;

    t=(u1*p1)+(u2*p2);
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<t<<endl;
    return 0;
}


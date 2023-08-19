#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,c,area1,area2,area3,area4,area5;
    cin>>a>>b>>c;
    area1=.5*a*c;
    area2=3.14159*c*c;
    area3=(a+b)*c/2.00;
    area4=b*b;
    area5=a*b;
    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<area1<<endl;
    cout<<"CIRCULO: "<<fixed<<setprecision(3)<<area2<<endl;
    cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<area3<<endl;
    cout<<"QUADRADO: "<<fixed<<setprecision(3)<<area4<<endl;
    cout<<"RETANGULO: "<<fixed<<setprecision(3)<<area5<<endl;
return 0;
}

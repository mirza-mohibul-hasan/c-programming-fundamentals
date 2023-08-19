#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char ch[100];
    double a,b;
    cin>>ch>>a>>b;
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<a+(b*.15)<<endl;
    return 0;
}


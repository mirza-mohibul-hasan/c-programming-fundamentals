#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double R,area;
    cin>>R;
    area=3.14159*R*R;
    cout<<fixed<<setprecision(4)<<"A="<<area<<endl;
    return 0;
}

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double avg;
    int x,y;
    cin>>x>>y;
    avg=(x*y)/12.0;
    cout<<fixed<<setprecision(3)<<avg<<endl;
    return 0;
}

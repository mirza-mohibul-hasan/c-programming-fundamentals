#inlude<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,t;
    double sal;
    cin>>n>>t>>sal;
    cout<<"NUMBER = "<<n<<endl<<"SALARY = U$ "<<fixed<<setprecision(2)<<t*sal<<endl;
    return 0;
}

#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int a,b,c,maxab,maxabc;
   cin>>a>>b>>c;
    maxab = ((a + b + abs(a - b)) / 2);

    maxabc =  ((maxab + c + abs(maxab - c)) / 2);
    cout<<maxabc<<" eh o maior"<<endl;

    return 0;
}

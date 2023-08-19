#include<iostream>
using namespace std;
int main()
{
    double x;
    int i,co=0;

    for(i=1;i<=6;i++)
    {
        cin>>x;
        if(x>0)
        {
            co++;
        }
    }
    cout<<co<<" valores positivos"<<endl;

    return 0;
}

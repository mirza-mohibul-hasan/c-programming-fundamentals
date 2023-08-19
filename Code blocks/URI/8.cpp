#include<bits/stdc++.h>

// Nayeem Shahriar Joy, Applied Physics & Electronic Engineering , University of Rajshahi.

using namespace std;

int main ()
{
    int t,a,b,c;

    cin>>t;

     int i=1;

    while ( t-- )
    {
        cin>>a>>b>>c;
        cout<<"Case "<<i<<": ";
        if(a<=20&&b<=20&&c<=20)
        {
            cout<<"good"<<endl;
        }
        else
        {
            cout<<"bad"<<endl;
        }
        i++;
    }

    return 0;
}

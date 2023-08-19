/*Mirza Mohibul Hasan*/
/*CSE-19@JUST*/
#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1)
#define mod 1000000007
#define ll long long
#define li long int
#define ld long double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define nl "\n"


int gcd(int m, int n)
{
    if(m==0)
    {
        return 0;
    }
    else
    {
        return gcd(m%n);
    }
}

int main()
{
ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n,m;
    cin>>m>>n;
    cout<<gcd(m,n);
return 0;
}
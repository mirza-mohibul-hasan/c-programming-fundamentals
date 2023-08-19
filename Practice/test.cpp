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


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int n[4];
    for(int i=0; i<4; i++)
    {
        cin>>n[i];
    }
    int res=1;
    for (int i = 1; i < 4; i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
        {
            if (n[i] == n[j])
            {
                break;
            }
        }

        if (i == j)
        {
            res++;
        }
    }
    cout<<res<<nl;


    return 0;
}

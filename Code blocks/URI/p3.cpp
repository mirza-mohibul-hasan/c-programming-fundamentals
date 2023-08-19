#include<bits/stdc++.h>
using namespace std;
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
int main(){

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int a,b;cin >> a >> b;
        if(a > b)cout << ">" << endl;
        if(a < b)cout << "<" << endl;
        if(a == b)cout << "==" << endl;
    }
    return 0;
}

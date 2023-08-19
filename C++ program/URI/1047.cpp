#include<iostream>
using namespace std;

int main()
{
    int h1,m1,h2,m2,temp,hour,mint;
    cin>>h1>>m1>>h2>>m2;

    temp=(h2*60 + m2)-(h1*60 + m1);

    if(temp<=0)
        temp=temp + 24*60;

    hour=temp/60;
    mint=temp%60;

    cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<mint<<" MINUTO(S)"<<endl;

    return 0;
}

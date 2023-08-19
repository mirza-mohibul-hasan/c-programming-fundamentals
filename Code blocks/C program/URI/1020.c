#include<stdio.h>
int main()
{
    int y,m,d,i,x;
    scanf("%d",&i);
    y=i/365;
    x=i%365;
    m=x/30;
    d=x%30;
    printf("%d ano(s)\n",y);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);
    return 0;
}

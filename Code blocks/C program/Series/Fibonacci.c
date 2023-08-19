#include<stdio.h>
int main ()
{
    int i,n,fibo,first=0,second=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",first);
        fibo=first+second;
        first=second;
        second=fibo;
    }
    return 0;
}

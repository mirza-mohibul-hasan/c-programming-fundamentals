#include<stdio.h>
int fun(int x)
{

    if(x==1)
    {
        return x;
    }
    else
    {
        x=x*fun(x-1);
    }
}
int main()
{

    int n;
    scanf("%d",&n);
    int ans=0;
    ans=fun(n);
    printf("%d\n",ans);

    return 0;
}

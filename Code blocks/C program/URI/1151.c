#include<stdio.h>
int main()
{
    int first=0,second=1,fibonacci,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i<n)
        {
            printf("%d ",first);
        }
        else if(i==n)
        {
            printf("%d\n",first);
        }
        fibonacci=first+second;
        first=second;
        second=fibonacci;
    }
    return 0;
}

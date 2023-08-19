#include<stdio.h>
int main()
{
    int t;
    int a,b;
    scanf("%d",&t);
    for(int j=1; j<=t; j++)
    {
        scanf("%d %d", &a, &b);
        int sum=0;
        for(int i=a; i<=b; i++)
        {
            if(i%2==1)
            {
                sum=sum+i;
            }
        }
        printf("Case %d: %d\n",j,sum);
    }
    return 0;
}

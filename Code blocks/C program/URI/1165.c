#include<stdio.h>
int main()
{
    int n,x,i,j,count=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&x);
        if(x==1 || x==2)
        {
            printf("%d eh primo\n",x);
        }
        else
        {
            for(j=2; j<=x-1; j++)
            {
                if(x%j==0)
                {
                    count++;
                }
            }
            if(count!=0)
                printf("%d nao eh primo\n",x);
            else
                printf("%d eh primo\n",x);
            count=0;
        }



    }
}


#include<stdio.h>
main(void)
{
    int X,i,sum=0;
    while(1)
    {
        scanf("%d",&X);
        if(X==0)
        {
            break;
        }
        else if(X%2==0)
        {
            for(i=1;i<=5;i++)
            {
                sum=sum +X;
                X=X+2;
            }
            printf("%d\n",sum);
        }
        else
        {
                X=X+1;
            for(i=1;i<=5;i++)
            {
                sum=sum+X;
                X=X+2;
            }
            printf("%d\n",sum);
        }
        sum=0;
    }
}

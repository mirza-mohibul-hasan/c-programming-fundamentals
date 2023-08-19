#include<stdio.h>
main(void)
{
    int N,X,i,j,sum=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&X);
        for(j=1;j<=(X/2);j++)
        {
            if(X%j==0)
            {
                sum=sum+j;
            }
        }
        if(X==sum)
        {
            printf("%d eh perfeito\n",X);
        }
         else
        {
            printf("%d nao eh perfeito\n",X);
        }
        sum=0;
    }
}

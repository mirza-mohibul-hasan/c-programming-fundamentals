#include<stdio.h>
main(void)
{
    int M,N,i,max,min,sum=0;
    while(1)
    {
        scanf("%d %d",&M,&N);
        if(M<=0||N<=0)
        {
            break;
        }
        else if(M>N)
        {
            max=M;
            min=N;
        }
         else if(M<N)
        {
            max=N;
            min=M;
        }
        for(i=min;i<=max;i++)
        {
            printf("%d ",i);
            sum=sum+i;
        }
        printf("Sum=%d\n",sum);
        sum=0;
    }
}

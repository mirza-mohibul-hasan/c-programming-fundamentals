#include<stdio.h>
int main()
{
    int A,N,i,sum=0;
    scanf("%d %d",&A,&N);
    if(N<=0)
    {
        while(1)
        {
            scanf("%d",&N);
            if(N>0)
                break;
        }
    }
    for(i=1; i<=N; i++)
    {
        sum=sum+A;
        A=A+1;
    }
    printf("%d\n",sum);
}

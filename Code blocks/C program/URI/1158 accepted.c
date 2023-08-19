#include<stdio.h>
int main()
{
    int N,i=1,j,sum=0,X,Y;
    scanf("%d",&N);
    for(i = 1;i <= N;i++)
    {
        scanf("%d %d",&X,&Y);
        if(X%2==0)
        X++;
        for(j = 1;j <= Y;j++)
        {
            sum = sum + X;
            X = X + 2;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}

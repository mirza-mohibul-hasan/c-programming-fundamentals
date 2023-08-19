#include <stdio.h>
int main()
{
    int N, X, Y, i, j, sum=0;
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        scanf("%d %d", &X, &Y);
        if(X%2==1)
        {
            for(j=1; j<=Y; j++)
            {
                sum=sum+X;
                X=X+2;
            }
            printf("%d\n", sum);
        }
        else
        {
            X=X+1;
            for(j=1; j<=Y; j++)
            {
                sum=sum+X;
                X=X+2;
            }
            printf("%d\n", sum);
        }
        sum=0;
    }
    return 0;
}


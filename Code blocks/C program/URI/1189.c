
#include<stdio.h>
int main()
{
    double M[12][12],sum=0.0;
    int i,j,n,m,count=0;
    char ch;

    scanf("%c",&ch);

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&M[i][j]);
        }
    }

    n=0;
    for(i=1; i<=5; i++)
    {
        for(j=0; j<=n; j++)
        {
            sum=sum+M[i][j];
            count++;
        }
        n++;

    }

    n=4;
    for(i=6; i<=10; i++)
    {
        for(j=0; j<=n; j++)
        {
            sum=sum+M[i][j];
            count++;
        }
        n--;

    }

    if(ch=='S')
    {
        printf("%.1lf\n",sum);
    }
    else if(ch=='M')
    {
        printf("%.1lf\n",sum/count);
    }

    return 0;
}




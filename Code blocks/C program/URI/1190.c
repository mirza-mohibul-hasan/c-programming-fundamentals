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

    n=10;
    m=1;
    for(j=11; j>=7; j--)
    {
        for(i=m; i<=n; i++)
        {
            sum=sum+M[i][j];
            count++;
        }
        n--;
        m++;

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





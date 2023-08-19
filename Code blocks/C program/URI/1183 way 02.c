#include<stdio.h>
int main()
{
    double M[12][12],sum=0.0,count=0.0;
    char ch;
    int i,j,k=1;
    scanf("%c",&ch);
    for(i=0;i<12;i++)
    {
        for(j=0;i<12;j++)
        {
            scanf("%lf",&M[i][j]);
        }
    }
    for(i=0;i<12;i++)
    {
        for(j=k;j<12;j++)
        {
            sum=sum+M[i][j];
            k++;
        }
    }
    if(ch=='S')
    {
        printf("%lf\n",sum);
    }
    else if(ch=='M')
    {
        printf("%lf\n",sum/66.0);
    }
}


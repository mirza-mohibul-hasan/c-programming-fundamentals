#include<stdio.h>
int main()
{
    int i,j;
    double M[12][12],sum=0.0,count=0.0;
    char ch;//or ch[2],then if(ch[0]==#)
    scanf("%c",&ch);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&M[i][j]);
        }
    }
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            if(i<j)
            {
                sum=sum+M[i][j];
                count++;
            }
        }
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


#include<stdio.h>
int main()
{
    int l,i,j;
    double M[12][12],sum=0.0;
    char ch;//or ch[2],then if(ch[0]==#)
    scanf("%d %c",&l,&ch);
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
            if(i==l)
            {
                sum=sum+M[i][j];
            }
        }
    }
    if(ch=='S')
    {
        printf("%.1lf\n",sum);
    }
    else if(ch=='M')
    {
        printf("%.1lf\n",sum/12.0);
    }
    return 0;
}


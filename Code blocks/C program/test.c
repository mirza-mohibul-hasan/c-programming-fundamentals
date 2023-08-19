#include<stdio.h>
int main()
{
    int c=1,i,j;
    char ch;
    double sum=0.0,M[3][3];
    scanf("%c",&ch);

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%lf",&M[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=c; j<3; j++)
        {
            sum=sum+M[i][j];
            c++;
        }
    }
    printf("%lf\n",sum);

    return 0;
}


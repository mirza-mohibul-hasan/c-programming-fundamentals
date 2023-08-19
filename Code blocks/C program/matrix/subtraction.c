#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,r,c;
    int first[100][100],second[100][100],result[100][100];
    printf("Enter the value of row:-");
    scanf("%d",&r);
    printf("Enter the value of column:-");
    scanf("%d",&c);

    printf("\n\n");

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("first[%d][%d]=",i,j);
            scanf("%d",&first[i][j]);
        }
    }

    printf("\n\n");

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("second[%d][%d]=",i,j);
            scanf("%d",&second[i][j]);
        }
    }

    printf("\n\n");

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            result[i][j]=first[i][j]+second[i][j];
        }
    }
     printf("\n\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }


    return 0;



}


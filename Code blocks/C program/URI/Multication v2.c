#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10],sum=0,r1,c1,r2,c2,i,j,k;

    printf("Enter the row & column of first matrix:\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter the row & column of second matrix:\n");
    scanf("%d %d",&r2,&c2);
    while(c1!=r2)
    {
        printf("Error!\n");
        printf("Enter the row & column of first matrix:\n");
        scanf("%d %d",&r1,&c1);
        printf("Enter the row & column of second matrix:\n");
        scanf("%d %d",&r2,&c2);
    }
    //matrix-01
    printf("\nEnter first matrix elements.\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("[%d][%d]=",i,j);
            scanf("%d",&first[i][j]);
        }
    }
    printf("\nMatrix-01\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }

    //second matrix
    printf("Enter secondt matrix elements.\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("[%d][%d]=",i,j);
            scanf("%d",&second[i][j]);
        }
    }
    printf("\nMatrix-02\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");
    }
    //Multiplication
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum=sum+first[i][k]*second[k][j];
                result[i][j]=sum;
                sum=0;
            }
        }
    }

    printf(\n"Multiplied matrix\n");
    for(i=0; i<c1; i++)
    {
        for(j=0; j<r2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

}

#include<stdio.h>
int main()
{
    int i,j,r,c;
    int mat[100][100];
    printf("Enter the value of row:-");
    scanf("%d",&r);
    printf("Enter the value of column:-");
    scanf("%d",&c);

    printf("\n\n");

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("mat[%d][%d]=",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("%d ",mat[j][i]);
        }
        printf("\n");
    }
}

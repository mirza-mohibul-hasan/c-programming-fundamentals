#include<stdio.h>
int main()
{
    int i,j,m,n,x,y;
    int arr[m][y];
    int arr1[m][n];
    int arr2[x][y];
    scanf("%d %d",&m,&n);
    scanf("%d %d",&x,&y);
    if(n!=y)
    {
        printf("Multiplication not possible\n");
    }
    else
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                scanf("%d",&arr1[i][j]);
        }
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
                scanf("%d",&arr1[i][j]);
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<y;j++)
            {
                arr[i][j]=arr1[i][j]+arr2[i][j];
                printf("%d ",arr[i][j]);
            }
            printf("\n");

        }
    }
    return 0;
}

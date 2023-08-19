#include<stdio.h>
int main()
{
    int i=0,j=0,k=0;
    int mat1[3][3]= {{1,2,3},{2,3,4},{3,4,5}};
    int mat2[3][3]= {{1,2,3},{2,3,4},{3,4,5}};
    int r1=3,r2=3,c1=3,c2=3;
    int sum=0;
    int mult[4][3];

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(int k=0; k<c1; k++)
            {
                sum=sum+ (mat1[i][k] * mat2[k][j]);
            }
            mult[i][j]=sum;
            sum=0;
        }
    }
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",mult[i][j]);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int i=0,j=0;
    int arr[4][3]= {{1,2,3},{2,3,4},{3,4,5},{4,5,6}};
    int arr2[4][3]= {{1,2,3},{2,3,4},{3,4,5},{4,5,6}};

    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",arr[i][j] + arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}

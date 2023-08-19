#include<stdio.h>
main(void)
{
    int N[20],i,j;
    for(j=0;j<20;j++)
    {
        scanf("%d",&N[j]);
    }
    for(i=0,j=19;i<20,j>=0;i++,j--)
    {
        printf("N[%d] = %d\n",i,N[j]);
    }
}

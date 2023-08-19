#include<stdio.h>
main(void)
{
    int N[10],x,i;
    scanf("%d",&x);

    for(i=0; i<10; i++)
    {
        N[i]=x;
        printf("N[%d] = %d\n",i,N[i]);
        x=x*2;


    }
}

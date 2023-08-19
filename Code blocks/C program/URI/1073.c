#include<stdio.h>
main(void)
{
    int i,x,temp;
    scanf("%d",&x);
    for(i=2;i<=x;i=i+2)
    {
        temp=i*i;
        printf("%d^2 = %d\n",i,temp);
    }
}

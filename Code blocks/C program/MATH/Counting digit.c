#include<stdio.h>
main(void)
{
    int n,count=0;
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        ++count;
    }
    printf("Total Digits=%d\n",count);
}

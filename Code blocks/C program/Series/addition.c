#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=1;i<=100;i++)
    {
       sum=sum+i;
       if(i<100)
        printf("%d+",i);
        else
        printf("%d",i);
    }
            printf("\n=%d",sum);
    return 0;
}

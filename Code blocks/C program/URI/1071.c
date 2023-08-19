#include<stdio.h>
main(void)
{
    int i,n1,n2,max,min,sum=0;
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
    {
        max=n1;
        min=n2;
    }
    else if(n2>n1)
    {
        max=n2;
        min=n1;
    }
    for(i=min+1;i<max;i++)
    {
        if(i%2==1||i%2==-1)
        {
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
}

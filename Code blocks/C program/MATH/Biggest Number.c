#include<stdio.h>
main(void)
{
    int X,temp=0,count=0;
    while(1)
    {
        scanf("%d",&X);
        if(X<0)
            break;
        else if(X>=temp)
        {
            temp=X;
            count++;
        }

    }
    printf("%d\n",temp);
    printf("%d\n",count);
}

#include<stdio.h>
main(void)
{
    int i,X;
    scanf("%d",&X);
    if(X%2==1)
    {
        for(i=X;i<=X+10;i=i+2)
         {
           printf("%d\n",i);
         }
    }
    else
            for(i=X;i<=X+10;i=i+2)
    {
        printf("%d\n",i+1);
    }

}


#include<stdio.h>
main(void)
{
    int j=60,i=1;
    while(1)
    {
        if(j<0)
        break;
        else
        printf("I=%d J=%d\n",i,j);
        i=i+3;
        j=j-5;

    }
}

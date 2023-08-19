#include<stdio.h>
void main()
{
    int roll;

    Sahi:
        scanf("%d",&roll);
        if(roll%2==0)
            goto Sahi;
        else
            printf("Give mr/mrs %d roll a chocolate\n",roll);
}


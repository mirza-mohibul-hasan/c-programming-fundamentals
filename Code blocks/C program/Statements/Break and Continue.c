#include<stdio.h>
void main()
{
    for(int i=0;i<=15;i++)
    {
        printf("Input: %d \n",i);

        if((i-2)%5==0)
        {
            continue;
        }

        if(i==15)
        {
            break;
        }

        printf("Fu*k you Molla %d times\n",i);

    }
}

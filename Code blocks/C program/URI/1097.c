#include<stdio.h>
main(void)
{
    int i,j,k,l,m,n,count=0;
    while(1)
    {
        i=1;
        for(j=7;j>=5;j--)
           {
                printf("I=%d J=%d\n",i,j);
                count++;
           }
        if(count==3)
            break;
    }
    count=0;
    while(1)
    {
        i=3;
        for(j=9;j>=7;j--)
           {
                printf("I=%d J=%d\n",i,j);
                count++;
           }
        if(count==3)
            break;
    }
    count=0;
    while(1)
    {
        i=5;
        for(j=11;j>=9;j--)
           {
                printf("I=%d J=%d\n",i,j);
                count++;
           }
        if(count==3)
            break;
    }
    count=0;
    while(1)
    {
        i=7;
        for(j=13;j>=11;j--)
           {
                printf("I=%d J=%d\n",i,j);
                count++;
           }
        if(count==3)
            break;
    }
    count=0;
    while(1)
    {
        i=9;
        for(j=15;j>=13;j--)
           {
                printf("I=%d J=%d\n",i,j);
                count++;
           }
        if(count==3)
            break;
    }
}

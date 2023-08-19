#include<stdio.h>
int main()
{
    int first=0,sec=1,fibo,i;
    int temp[100],input,t,j;
    scanf("%d",&t);
    for(i=0;i<100;i++)
    {
        temp[i]=first;
        fibo=first+sec;
        first=sec;
        sec=fibo;
    }
    for(j=0;j<t;j++)
    {
        scanf("%d",&input);
        printf("Fib(%d) = %d\n",input,temp[input]);
    }
    return 0;
}


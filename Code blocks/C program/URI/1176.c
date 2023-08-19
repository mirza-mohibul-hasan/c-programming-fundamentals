#include<stdio.h>
int main()
{
    long long int fibo[100];
    int i,j,n,first=0,sec=1,temp,input;
    scanf("%d",&n);
    for(i=0; i<60; i++)
    {
        fibo[i]=first;
        temp=first+sec;
        first=sec;
        sec=temp;
    }

    for(j=0; j<n; j++)
    {
        scanf("%d",&input);
        printf("Fib(%d) = %d\n",input,fibo[input]);
    }
    return 0;
}

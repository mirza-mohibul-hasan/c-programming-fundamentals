#include<stdio.h>
int main()
{
    int i=1,n,x;
    scanf("%d",&n);
    while(i<=10)
    {
        x=i*n;
        printf("%d x %d = %d\n",i,n,x);
        i=i+1;
    }
    return 0;
}

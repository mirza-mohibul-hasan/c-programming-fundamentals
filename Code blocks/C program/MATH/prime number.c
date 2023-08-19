#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
        printf("Yes!prime\n");
    else
        printf("No!not prime\n");
    return 0;
}

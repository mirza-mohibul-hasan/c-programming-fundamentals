#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    scanf("%d",&x);
    int n=x;
    int sum=0;

    while(n!=0)
    {
        sum=sum+ pow((n%10),3);
        n=n/10;
    }
    if(x==sum)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not Armstrong\n");
    }
}

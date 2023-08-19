#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int np=0;

    for(int i=2; i<=n-1; i++)
    {
        if(n%i==0)
        {
            printf("Not prime");
            return 0;
        }
    }
    printf("Prime Number");

    return 0;
}

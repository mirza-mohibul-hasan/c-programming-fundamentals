#include<stdio.h>
int main()
{
    int n,l,i=1;
    scanf("%d %d",&n,&l);
    while(i<=l)
    {
        printf("%d*%d = %d\n",n,i,n*i);
        i++;
    }
    return 0;
}

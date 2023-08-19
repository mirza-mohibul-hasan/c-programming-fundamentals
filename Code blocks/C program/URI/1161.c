#include<stdio.h>
int main()
{
    int m,n,fact1=1,fact2=1,i,j,k,t;
    scanf("%d",&t);

    for(k=0;k<t;k++)
    {
        scanf("%d %d",&m,&n);
    }

   for(k=0;k<t;k++)
   {
        for(i=1;i<=m;i++)
    {
        fact1=fact1*i;

    }
    for(j=1;j<=n;j++)
    {
       fact2=fact2*j;
    }

    int sum=fact1+fact2;

    printf("%d\n",sum);

   }

    return 0;

}

#include<stdio.h>
int main()
{
    float i,j,k,l,m;

    for(i=0;i<=2;i=i+.2)
    {
        for(j=1,k=1;j<=3,k<=3;j++,k++)
        {
            printf("I=%d J=%d\n",i,k);
        }
    }
    return 0;
}

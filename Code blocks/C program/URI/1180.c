#include<stdio.h>
int main()
{
    int n,i,pos;
    scanf("%d",&n);
    if(n>1&&n<1000)
    {
        int a[n];
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        int min=a[0];
        for(i=1; i<n; i++)
        {
            if(min>a[i])
            {
                min=a[i];
                pos=i;
            }
        }
        printf("Menor valor: %d\nPosicao: %d\n",min,pos);
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int n,i,j=0,a,b,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if (a>20 || b>20 || c>20)
            {
                ++j;
                printf("Case %d: bad\n",j);
            }
        else
            {
                ++j;
                printf("Case %d: good\n",j);
            }
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int x,z,i,count=1,sum=0;
    scanf("%d %d",&x,&z);
    while(x>=z)
    {
        scanf("%d",&z);
    }

    for(i=x; i<z; i++)
    {
        sum=sum+i;
        if(sum>z)
        {
            break;
        }
        else
        {
            count++;
        }
    }
    printf("%d\n",count);

return 0;

}

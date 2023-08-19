#include<stdio.h>
int main()
{
    int n,a[100],i,l=1,sum=0,result=0,avg;
    while(scanf("%d",&n)==1&&n!=0)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        sum=0;
        result=0;
        for(i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
        avg=sum/n;

        for(i=0;i<n;i++)
        {
            if(a[i]>avg)
            {
                result=result+(a[i]-avg);
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",l,result);
        l++;
    }
    return 0;
}

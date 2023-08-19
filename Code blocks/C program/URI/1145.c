#include<stdio.h>
int main()
{
    int x,y,i,j,temp=0;
    scanf("%d %d",&x,&y);
    for(i=1; i<=y,temp<y; i++)
    {
        for(j=1; j<=x; j++)
        {

            temp++;
            if(temp==y+1)
            {
                break;
            }
            else if(j==temp)
            {
                printf("%d\n",temp);
            }
            else
            {
                printf("%d ",temp);
            }
        }
        printf("\n");
    }
}

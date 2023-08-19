#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,a,b;
    scanf("%d",&n);
    int temp[n][2];
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&temp[i][0],&temp[i][1]);
    }

    for(i=0; i<n; i++)
    {
        a=temp[i][0];
        b=temp[i][1];
        if(a==b)
            printf("=\n");
        else if(a<b)
            printf("<\n");
        else
            printf(">\n");
        }
    return 0;
}

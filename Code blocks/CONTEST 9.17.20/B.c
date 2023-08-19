#include<stdio.h>
int main()
{
    char a[300],b[300];
    long long c[300],d[300],n,m,i,j,x;
    while(1)
    {
        scanf("%s %s",&a,&b);
        n=strlen(a);
        m=strlen(b);
        for(i=n-1; i>=0; i--)
        {
            c[n-1-i]=a[i]-'0';
        }
        for(i=m-1; i>=0; i--)
        {
            d[m-1-i]=b[i]-'0';
        }
        long long e[600]= {0};
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                e[i+j]+=c[i]*d[j];
                e[i+j+1]+=e[i+j]/10;
                e[i+j]%=10;
            }
        }
        x=n+m;
        while(e[x]==0 && x>0)
        {
            x--;
        }
        for(i=x; i>=0; i--)
        {
            printf("%d",e[i]);
        }
        printf("\n");

    }
    return 0;
}

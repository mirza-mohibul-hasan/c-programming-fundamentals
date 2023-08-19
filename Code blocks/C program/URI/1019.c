#include<stdio.h>
int main()
{
    int N,i,h,m,s;
    scanf("%d",&N);
    h=N/3600;
    i=N%3600;
    m=i/60;
    s=i%60;
    printf("%d:%d:%d\n",h,m,s);
    return 0;

}


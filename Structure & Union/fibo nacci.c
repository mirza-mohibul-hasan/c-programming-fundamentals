#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int first=0, second=1, fibo=0;
    for(int i=0; i<n; i++)
    {
        printf("%d ", first);
        fibo=first+second;
        first=second;
        second = fibo;
    }
}

#include<stdio.h>
void bangla(int n)
{
    if (n >= 10000000)
    {
        bangla (n / 10000000);
        printf (" %d",n);
        printf (" kuti");
        n %= 10000000;
    }
    if (n >= 100000)
    {
        bangla (n / 100000);
        printf (" %d",n);
        printf (" lakh");
        n %= 100000;
    }
    if (n >= 1000)
    {
        bangla (n / 1000);
        printf (" %d",n);
        printf (" hajar");
        n %= 1000;
    }
    if (n >= 100)
    {
        bangla (n / 100);
        printf (" %d",n);
        printf (" shata");
        n %= 100;
    }
}
int main()
{
    int input,i=1;
    while (scanf("%lld",&input)!=EOF){
        printf ("%4d.",++i);
        if (input==0)
        {
            printf(" 0");
        }
        bangla (input);
        printf("\n");
    }
    return 0;
}

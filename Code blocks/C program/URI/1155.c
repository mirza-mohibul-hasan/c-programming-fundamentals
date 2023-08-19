#include <stdio.h>
int main()
{
    double i,x,S=0;
    for(i=1; i<=100; i++)
    {
        x=1/i;
        S=S+x;
    }
    printf("%.2lf\n",S);
    return 0;
}

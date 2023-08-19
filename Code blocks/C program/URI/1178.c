#include<stdio.h>
int main()
{
    int N[100],i;
    double Y;
    scanf("%lf",&Y);
    for(i=0; i<100; i++)
        {
            printf("N[%d] = %.004lf\n",i,Y);
            Y=Y/2.0000;
        }
    return 0;
}


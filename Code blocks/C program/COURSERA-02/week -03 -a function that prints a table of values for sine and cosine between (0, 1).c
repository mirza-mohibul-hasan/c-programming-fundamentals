#include<stdio.h>
#include<math.h>
int main(void)
{
    double x;
    printf("Here is the table:\n\n");
    printf("X\t\tsin(x)\t\tcos(x)\n\n");
    for(x=0.05;x<1;x=x+.05)
    {
        printf("%.2lf\t\t%.2lf\t\t%.2lf\n\n",x,sin(x),cos(x));
    }


    return 0;
}

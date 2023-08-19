#include<stdio.h>
#include<math.h>
int main(void)
{
    double x,result;

    back:
        printf("Enter the value of x:");
        scanf("%lf",&x);
    if(x>0&&x<1)
    {
        result=sin(x);
        printf("sin(%.2lf) = %.2lf\n",x,result);
    }
    else
    {
        printf("Wrong input\n");
        goto back;
    }
    return 0;
}

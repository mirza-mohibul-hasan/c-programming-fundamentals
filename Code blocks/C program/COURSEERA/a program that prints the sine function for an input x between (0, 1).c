#include<stdio.h>
#include<math.h>

int main(void)
{
    //declaring data type.
    double x,result;

    // i'm going to use "goto" statement so that if the value isn't in the range then it can take input again.
    back:
    printf("Enter the value of x:");
    scanf("%lf",&x);

    printf("\n")

    if(x>0&&x<1)//it is the range for input x.
    {
        result=sin(x);
        printf("The value of sin(x) is  = %.2lf when, x=%.2lf",result,x);
    }
    else//when the input isn't in the range then goto statement will work.

    {
        printf("Wrong input\n");
        goto back;
    }

    return 0;
}

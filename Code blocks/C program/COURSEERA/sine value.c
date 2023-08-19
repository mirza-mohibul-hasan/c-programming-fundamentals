#include<stdio.h>
#include<math.h>
int main(void)
{
    //declaring data type
    float x,result;
    printf("Enter the input of x between (0, 1) : ");
    //it take the input & assign in x.
    scanf("%f",&x);

    //it check the input x is between(0,1) or not.
    if(x>0&&x<1)
    {
        // the value of sin(x) assigned in the result variable.
        result=sin(x);

        //printing the value of sine function
        printf("\nThe value of sine function is : %.4f\n",result);
    }
    //if the input is not in the range then it say error.
    else
    {
        printf("\nError! The input x is not in the range. Please try again.\n");
    }

    return 0;
}

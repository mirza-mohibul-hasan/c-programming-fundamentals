#include<stdio.h>
#include<math.h>//we have to print sine and cos value ,that's why i'm using math.h library function.
int main(void)
{
    //declaring data type
    double x,sine,cosine;

    printf("X\tsin(x)\tcos(x)\n\n");
    //i'm using for loop to make a table.
    for(x=.01; x<1; x=x+.2)
    {
        sine=sin(x);//this assigned value of sin(x) into sine.
        cosine=cos(x);//this assigned value of cos(x) into cosine.

        //printing value of x.
        //printing value of sine&cosine.
        printf("%.04lf\t%.04lf\t%.04lf\n\n",x,sine,cosine);
    }
    return 0;
}

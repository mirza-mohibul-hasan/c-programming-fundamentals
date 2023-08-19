#include<stdio.h>
double area(double x)
{
    return 3.1416*x*x;
}
int main()
{
    double r;
    scanf("%lf",&r);
   double result= area(r);
    pritf("Area = %.3lf\n",result);

}


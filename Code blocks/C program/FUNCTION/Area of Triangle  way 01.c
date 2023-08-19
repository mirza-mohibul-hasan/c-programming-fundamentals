#include<stdio.h>
double sum(double a,double b)
{
    return  .5 * a * b;
}
int main()
{
    double n1,n2;

    scanf("%lf %lf",&n1,&n2);

    double result=sum(n1,n2);

    printf("%lf\n",result);

}

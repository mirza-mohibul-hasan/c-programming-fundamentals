#include<stdio.h>
void sum(double a,double b);
int main()
{
    double n1,n2;
    scanf("%lf %lf",&n1,&n2);
    sum(n1,n2);

}
void sum(double a,double b)
{
    printf("n1+n2 = %.3lf\n",a+b);
}

#include<stdio.h>
void largest(double a,double b,double c);
int main()
{
    double n1,n2,n3;
    scanf("%lf %lf %lf",&n1,&n2,&n3);
    double temp=(n1,n2,n3);
    printf("LARGEST = %.3lf\n",temp);

}
void largest(double a,double b,double c)
{
    double l;
    l=a;
    if(l<b)
        {
            l=b;
        }
    if(l<c)
        {
            l=c;
        }
    return l;
}


/*x=(-b+\-sqrt(b^2-4ac))/2a*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,x,y;
    scanf("%f %f %f",&a ,&b ,&c);
    d=(b*b)-(4*a*c);
    if(d<0||a==0)
    {
        printf("Impossivel calcular\n");
    }
    else
        {
            x=(-b+sqrt(d))/(a+a);
            y=(-b-sqrt(d))/(a+a);
        printf("R1 = %.5f\n",x);
        printf("R2 = %.5f\n",y);
        }
    return 0;
}

#include <stdio.h>
int main()
{
  double a,b,c;
  scanf("%lf %lf %lf",&a,&b,&c);
  double triangle=.5*a*c;
  double circle=3.14159*c*c;
  double trapezium=.5*(a+b)*c;
  double square=b*b;
  double rectangle=a*b;
  printf("triangle:%.3lf\n",triangle);
  printf("circle:%.3lf\n",circle);
  printf("trapezium:%.3lf\n",trapezium);
  printf("square:%.3lf\n",square);
  printf("rectangle:%.3lf\n",rectangle);
  return 0;
}





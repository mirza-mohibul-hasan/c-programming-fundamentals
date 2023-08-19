#include<stdio.h>
int main()
{
    int num,time;
    float sph,x;
    scanf("%d %d %f",&num,&time,&sph);
    x=time*sph;
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f\n",x);
    return 0;

}

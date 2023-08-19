#include<stdio.h>
int main ()
{
    int time,averagespeed;
    float fuel,distance;
    scanf("%d %d",&time,&averagespeed);
    distance=time*averagespeed;
    fuel=(distance/12);
    printf("%.3f\n",fuel);
    return 0;

}

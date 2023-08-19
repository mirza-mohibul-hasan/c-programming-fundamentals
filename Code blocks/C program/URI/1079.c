/*
weight average=sum of(number*own weight)/sum of all weight
*/
#include<stdio.h>
main(void)
{
    float x,y,z,avg;
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%f %f %f",&x,&y,&z);
        avg=(x*2+y*3+z*5)/10;
        printf("%.1f\n",avg);

    }

}

#include<stdio.h>
int main()
{
    double A,B,C,MEDIA;
    scanf("%lf %lf %lf",&A,&B,&C);
    MEDIA=(A/10*2)+(B/10*3)+(C/10*5);
    printf("MEDIA = %.1lf",MEDIA);
    return 0;
}

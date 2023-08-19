#include <stdio.h>
int main()
{
    int h1, h2,m1,m2,time1,time2,hour,min,temp;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);

    time1=h2-h1;
    time2=m2-m1;

    if(time1>0)
    {
        temp=time1*60+time2;
        hour=temp/60;
        min=temp%60;
    }
    else if(time1 <= 0)
    {
        time1=24+time1;
        temp=time1*60+time2;
        hour=temp/60;
        min=temp%60;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour,min);
    return 0;
}

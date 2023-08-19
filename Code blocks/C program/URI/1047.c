#include <stdio.h>
int main()
{
    int h1, h2,m1,m2,hour,min,temp;
    scanf("%d %d",&h1,&m1);
    scanf("%d %d",&h2,&m2);

    hour=h2-h1;
    min=m2-m1;
    if(hour>0)
    {
        temp=hour*60+min;
        hour=temp/60;
        min=temp%60;
    }
    else if(hour<=0)
    {
        hour=24+hour;
        temp=hour*60+min;
        hour=temp/60;
        min=temp%60;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour,min);

    return 0;
}

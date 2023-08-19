#include<stdio.h>
int main()
{
    int h1,h2,m1,m2;
    int temp,hour,min;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);

    temp=((h2*60)+m2)-((h1*60)+m1);
    if(temp<=0)
    {
        temp=temp+(24*60);
    }
    hour=temp/60;
    min=temp%60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);
    return 0;
}

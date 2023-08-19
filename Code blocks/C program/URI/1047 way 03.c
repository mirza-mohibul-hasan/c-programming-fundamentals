#include<stdio.h>
int main()
{
    int hour,min,h1,h2,m1,m2;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    hour=h2-h1;
    min=m2-m1;
    if(hour<0)
    {
        hour=(h2-h1)+24;
    }
    if(min<0)
    {
        min=(m2-m1)+60;
        hour--;
    }
    if(h1==h2 && m1==m2)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int d1,d2,h1,m1,s1,h2,m2,s2,day,hour,min,sec;
    char m[10],n[10],a[5],b[5],x[5],y[5];

    scanf("%s %d",&m,&d1);
    scanf("%d %s %d %s %d",&h1,&a,&m1,&b,&s1);

    scanf(" %s %d",&n,&d2);
    scanf("%d %s %d %s %d",&h2,&x,&m2,&y,&s2);
    day=d2-d1;  hour=h2-h1;  min=m2-m1;  sec=s2-s1;
    if(sec<0)
    {
        min--;
        sec=sec+60;
    }
    if(min<0)
    {
        hour--;
        min=min+60;
    }
    if(hour<0)
    {
        day--;
        hour=hour+24;
    }
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",day,hour,min,sec);
    return 0;

}

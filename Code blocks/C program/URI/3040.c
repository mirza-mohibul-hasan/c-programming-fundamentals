#include<stdio.h>
int main()
{
    int i,N,h,d,g;

    scanf("%d",&N);

    char ch[N];

    for(i=1;i<=N;i++)
    {
        scanf("%d %d %d",&h,&d,&g);
        if(h>=200&&h<=300 && d>=50 && g>=150)
            ch[i]='y';
        else
            ch[i]='n';
    }
    for(i=1;i<=N;i++)
    {
        if(ch[i]=='y')
            printf("Sim\n");
        else if(ch[i]=='n')
            printf("Nao\n");
    }
    return 0;
}

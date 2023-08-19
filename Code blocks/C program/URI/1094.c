#include <stdio.h>

int main()
{
    char ch,p='%';
    int N,i,x,frog=0,rabit=0,rat=0,total;
    double pc,pr,ps;
    scanf("%d",&N);

    for(i=1; i<=N; i++)
    {
        scanf("%d %c",&x,&ch);
        if(ch=='C')
        {
            rabit=rabit+x;
        }
        else if(ch=='R')
        {
            rat=rat+x;
        }
        else if(ch=='S')
        {
            frog=frog+x;
        }
    }
    total=rabit+rat+frog;
    pc=(rabit*100.00)/total;
    pr=(rat*100.00)/total;
    ps=(frog*100.00)/total;

    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",rabit);
    printf("Total de ratos: %d\n",rat);
    printf("Total de sapos: %d\n",frog);

    printf("Percentual de coelhos: %.2lf %c\n",pc,p);
    printf("Percentual de ratos: %.2lf %c\n",pr,p);
    printf("Percentual de sapos: %.2lf %c\n",ps,p);


    return 0;
}

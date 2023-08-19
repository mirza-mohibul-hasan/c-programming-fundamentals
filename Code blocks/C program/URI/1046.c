#include<stdio.h>
int main()
{
    int t1,t2,i,j,count=0;
    scanf("%d %d",&t1,&t2);

    if(t1<t2)
    {
        for(i=t1;i<t2;i++)
      {
        count++;
      }
    printf("O JOGO DUROU %d HORA(S)\n",count);
    }

   else if(t1>t2)
    {
       for(i=t1;i<24;i++)
        {
         count++;
        }
       for(j=1;j<=t2;j++)
        {
         count++;
        }
    printf("O JOGO DUROU %d HORA(S)\n",count);
    }

    else if(t1==t2)
        printf("O JOGO DUROU 24 HORA(S)\n");
    return 0;
}

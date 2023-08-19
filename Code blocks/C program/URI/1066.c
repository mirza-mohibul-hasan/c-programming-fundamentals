#include<stdio.h>
main(void)
/*3 valor(es) par(es)
2 valor(es) impar(es)
1 valor(es) positivo(s)
3 valor(es) negativo(s)
*/
{
    int i,num,even=0,odd=0,pos=0,neg=0;
    for(i=1;i<=5;i++)
    {
        scanf("%d",&num);
        if(num%2==0)
        {
            even++;
        }
        if(num%2==1||num%2==-1)
        {
            odd++;
        }
        if(num>0)
        {
            pos++;
        }
        if(num<0)
        {
            neg++;
        }
    }
    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);
}

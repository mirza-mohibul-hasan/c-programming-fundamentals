#include<stdio.h>
main(void)
{
    float input,increase,total;
    int percent;
    char ch='%';
    scanf("%f",&input);
    if(input>=0&&input<=400.00)
    {
        percent=15;
        increase=(input*.15);
        total=input+increase;
    }
       else if(input>=400.01&&input<=800.00)
    {
        percent=12;
        increase=(input*.12);
        total=input+increase;
    }
      else if(input>=800.01&&input<=1200.00)
    {
        percent=10;
        increase=(input*.10);
        total=input+increase;
    }
       else if(input>=1200.01&&input<=2000.00)
    {
        percent=7;
        increase=(input*.07);
        total=input+increase;
    }
       else if(input>2000.00)
    {
        percent=4;
        increase=(input*.04);
        total=input+increase;
    }
        printf("Novo salario: %.2f\n",total);
        printf("Reajuste ganho: %.2f\n",increase);
        printf("Em percentual: %d %c\n",percent,ch);
}

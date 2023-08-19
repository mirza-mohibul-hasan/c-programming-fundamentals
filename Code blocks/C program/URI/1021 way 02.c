#include<stdio.h>
int main()
{
    double N;
    int temp;
    scanf("%lf",&N);
    temp=N*100;

    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n",temp/10000);
    temp=temp%10000;
    printf("%d nota(s) de R$ 50.00\n",temp/5000);
    temp=temp%5000;
    printf("%d nota(s) de R$ 20.00\n",temp/2000);
    temp=temp%2000;
    printf("%d nota(s) de R$ 10.00\n",temp/1000);
    temp=temp%1000;
    printf("%d nota(s) de R$ 5.00\n",temp/500);
    temp=temp%500;
    printf("%d nota(s) de R$ 2.00\n",temp/200);

    printf("MOEDAS:\n");

    temp=temp%200;
    printf("%d moeda(s) de R$ 1.00\n",temp/100);
    temp=temp%100;
    printf("%d moeda(s) de R$ 0.50\n",temp/50);
    temp=temp%50;
    printf("%d moeda(s) de R$ 0.25\n",temp/25);
    temp=temp%25;
    printf("%d moeda(s) de R$ 0.10\n",temp/10);
    temp=temp%10;
    printf("%d moeda(s) de R$ 0.05\n",temp/5);
    temp=temp%5;
    printf("%d moeda(s) de R$ 0.01\n",temp);

    return 0;

}

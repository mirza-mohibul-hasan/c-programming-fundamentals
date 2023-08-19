#include<stdio.h>
main(void)
{
    double input,a,b,c,tax;
    scanf("%lf",&input);

    if(input>=0&&input<=2000.00)
    {
        printf("Isento\n");
    }
    else if(input>=2000.01&&input<=3000.00)
    {
        a=input-2000.00;
        tax=a*.08;
    }
    else if(input>=3000.01&&input<=4500.00)
    {
        a=input-2000.00;
        b=a-1000;
        tax=1000*.08+b*.18;
    }
    else if(input>4500.00)
    {
        a=input-2000.00;
        b=a-1000;
        c=b-1500;
        tax=(1000*.08)+(1500*.18)+(c*.28);
    }
    printf("R$ %.2lf\n",tax);
}

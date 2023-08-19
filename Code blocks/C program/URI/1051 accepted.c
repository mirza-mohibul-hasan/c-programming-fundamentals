#include <stdio.h>
int main()
{
    double input,tax;
    scanf("%lf", &input);
    if(input>=0 && input<=2000)
        {
            printf("Isento\n");
        }
    else if(input>=2000.01 && input<=3000)
    {
        input=input-2000;
        tax= input*.08;
        printf("R$ %.2lf\n",tax);
    }
    else if(input>=3000.01 && input<=4500)
    {
        input=input-3000;
        tax= input*.18+80;
        printf("R$ %.2lf\n",tax);
    }
    else
    {
        input=input-4500;
        tax= input*.28+350;
        printf("R$ %.2lf\n",tax);
    }
    return 0;
}


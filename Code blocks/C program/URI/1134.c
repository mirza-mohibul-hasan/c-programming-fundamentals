#include<stdio.h>
main(void)
{
    int input,counta=0,countg=0,countd=0;
    while(1)
    {
        scanf("%d",&input);
        if(input==4)
        {
            break;
        }
        else if(input<1||input>4)
        {
            continue;
        }
        else if(input==1)
        {
            counta++;
        }
        else if(input==2)
        {
            countg++;
        }
        else if(input==3)
        {
            countd++;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",counta);
    printf("Gasolina: %d\n",countg);
    printf("Diesel: %d\n",countd);
}

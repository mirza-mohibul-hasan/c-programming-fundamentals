#include<stdio.h>
main(void)
{
    float input,count=0,sum=0,avg,x;
    while(1)
    {

        while(1)
        {
            scanf("%f",&input);
            if(input>=0&&input<=10)
            {
                sum=sum+input;
                count++;
            }
            else if(input<0||input>10)
            {
                printf("nota invalida\n");
            }
            if(count==2)
            {
                break;
            }
        }
        avg=sum/2.00;
        printf("media = %.2f\n",avg);

back:
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%f",&x);
        if(x==2)
            break;
        else if(x==1)
            continue;
        else
            goto back;
    }

}

#include<stdio.h>
main(void)
{
    float input,count=0,sum=0,avg;
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

}

#include<stdio.h>
main(void)
{
    int input,temp,rem,sum=0;
    scanf("%d",&input);
    temp=input;
    while(rem!=0)
    {
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }
        if(sum==input)
            printf("Armstrong number\n");
        else
            printf("Not Armstrong number\n");
}


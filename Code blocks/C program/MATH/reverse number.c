#include<stdio.h>
main(void)
{
    int input,temp,rem,sum=0;
    scanf("%d",&input);
    temp=input;
    while(rem!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
        printf("%d\n",sum);
}

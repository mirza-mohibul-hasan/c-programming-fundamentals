#include<stdio.h>
main(void)
{
    int input,rem,temp,sum=0,i,fact;
    scanf("%d",&input);
    temp=input;
    while(temp!=0)
    {
        rem=temp%10;
        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==input)
        printf("Yes!strong\n");
    else
        printf("No!not strong\n");
}

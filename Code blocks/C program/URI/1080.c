#include<stdio.h>
int main()
{
    int input,i,temp=-1,position;
    for(i=1; i<=100; i++)
    {
        scanf("%d",&input);
        if(input>temp)
        {
            temp=input;
            position=i;
        }
    }
    printf("%d\n%d\n",temp,position);
    return 0;
}

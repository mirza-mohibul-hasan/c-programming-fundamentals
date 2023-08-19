#include <stdio.h>
int result(int);
int main()
{
    int num;
    scanf("%d",&num);
    result(num);
    getch();
    return 0;
}

int result(int num)
{
     if(num%2==0)
         {
            printf("\n%d is even",num);
         }
     else
         {
            printf("\n%d is odd",num);
         }
}


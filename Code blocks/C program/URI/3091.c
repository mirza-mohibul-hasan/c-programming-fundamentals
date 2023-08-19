#include <stdio.h>
int rest(int num1, int num2)
{
     int rest;

     rest = num1%num2;

     return rest;
}

int main()
{
     int var1, var2;
     scanf("%d",&var1);
     scanf("%d",&var2);

     int restm = rest(var1, var2);
     printf ("%d\n", restm);

     return 0;
}

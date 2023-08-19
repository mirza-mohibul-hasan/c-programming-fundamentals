#include<stdio.h>
int main()
{
    int ar[1500]= {1},a,b,c,temp,i;
    a=b=c=0;
    for(i = 1; i < 1500; i++)
    {
        while(ar[a]*2 <= ar[i-1])
        {
            a++;
        }
        while(ar[b]*3 <= ar[i-1])
        {
            b++;
        }
        while(ar[c]*5 <= ar[i-1])
        {
            c++;
        }
        temp = ar[a]*2;

        if(ar[b]*3 < temp)
        {
            temp = ar[b]*3;
        }
        if(ar[c]*5 < temp)
        {
            temp = ar[c]*5;
        }
        ar[i] = temp;
    }
    printf("The 1500'th ugly number is %d.\n", ar[1499]);
    return 0;
}

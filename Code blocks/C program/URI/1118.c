#include<stdio.h>
int main()
{
    double x,temp[5];
    int i=0;
    while(1)
    {
        scanf("%lf",&x);
        if(x==2)
        {
            break;
        }
        else if(x<0 || x>10)
        {
            printf("nota invalida\n");
        }
        else if(x>=0 && x<=10)
        {
            temp[i]=x;
        }
        i++;
    }
}

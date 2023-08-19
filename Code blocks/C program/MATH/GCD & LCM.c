#include<stdio.h>
main(void)
{
    int X,Y;
    int n1,n2,GCD,LCM,rem;
    scanf("%d %d",&X,&Y);
    if(X>Y)
        {
            n1=X;
            n2=Y;
        }
    else
        {
            n1=Y;
            n2=X;
        }

    while(n2!=0)
    {
      rem=n1%n2;
      n1=n2;
      n2=rem;
    }
    GCD=n1;
    LCM=(X*Y)/GCD;
    printf("GCD = %d\n",GCD);
    printf("LCM = %d\n",LCM);
}

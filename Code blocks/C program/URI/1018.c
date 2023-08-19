#include<stdio.h>
int main()
{
    int N;
    int a,b,c,d,e,f,g;
    int i,j,k,l,m,n;

    scanf("%d",&N);

    printf("%d\n",N);

    a=N/100;
    printf("%d nota(s) de R$ 100,00\n",a);
    i=N%100;
    b=i/50;
    printf("%d nota(s) de R$ 50,00\n",b);
    j=i%50;
    c=j/20;
    printf("%d nota(s) de R$ 20,00\n",c);
    k=j%20;
    d=k/10;
    printf("%d nota(s) de R$ 10,00\n",d);
    l=k%10;
    e=l/5;
    printf("%d nota(s) de R$ 5,00\n",e);
    m=l%5;
    f=m/2;
    printf("%d nota(s) de R$ 2,00\n",f);
    n=m%2;
    g=n/1;
    printf("%d nota(s) de R$ 1,00\n",g);

    return 0;

}

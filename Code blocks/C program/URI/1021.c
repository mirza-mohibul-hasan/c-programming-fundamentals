#include<stdio.h>
int main()
{
    double N;
    int a,b,c,d,e,f,temp,u,v,w,x,y,z,i,j,k,l,m,n,o,p,q,r;

    scanf("%lf",&N);
    temp=N*100;

    printf("NOTAS:\n");

    a=temp/10000;
    printf("%d nota(s) de R$ 100.00\n",a);
    i=temp%10000;
    b=i/5000;
    printf("%d nota(s) de R$ 50.00\n",b);
    j=i%5000;
    c=j/2000;
    printf("%d nota(s) de R$ 20.00\n",c);
    k=j%2000;
    d=k/10000;
    printf("%d nota(s) de R$ 10.00\n",d);
    l=k%1000;
    e=l/500;
    printf("%d nota(s) de R$ 5.00\n",e);
    m=l%500;
    f=m/200;
    printf("%d nota(s) de R$ 2.00\n",f);

printf("MOEDAS:\n");

    n=m%200;
    u=n/100;
    printf("%d moeda(s) de R$ 1.00\n",u);
    o=n%100;
    v=o/50;
    printf("%d moeda(s) de R$ 0.50\n",v);
    p=o%50;
    w=p/25;
    printf("%d moeda(s) de R$ 0.25\n",w);
    q=p%25;
    x=q/10;
    printf("%d moeda(s) de R$ 0.10\n",x);
    r=q%10;
    y=r/5;
    printf("%d moeda(s) de R$ 0.05\n",y);
    z=r%5;
    printf("%d moeda(s) de R$ 0.01\n",z);

    return 0;

}

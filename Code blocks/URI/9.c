#include<stdio.h>
int main()
{
    int n,h,i,j,k,sum,proper,ara[1000],move,a=1;
    while(scanf("%d",&n)==1&&n!=0){
    sum=0;
    i=0;
    for(j=0;j<n;j++){
        scanf("%d",&h);
        sum=sum+h;
        ara[i++]=h;
    }
    proper=sum/n;
    move=0;
    for(k=0;k<i;k++){
        if(ara[k]>proper)
            move+=(ara[k]-proper);
    }

    printf("Set #%d\n",a++);
    printf("The minimum number of moves is %d.\n",move);
     printf("\n");

}
return 0;
}

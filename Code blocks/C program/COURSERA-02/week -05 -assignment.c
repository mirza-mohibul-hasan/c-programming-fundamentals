#include<stdio.h>
int main(void)
{
    //Declaration
    int i,num;
    double weight[100],sum=0,avg;

    //Amount of seals
    printf("Enter the total number of elephant seals : ");
    scanf("%d",&num);

    printf("\n");

    //taking weight of every seals
    for(i=0;i<num;i++)
    {
        printf("Enter the weight of %d no seal : ",i+1);
        scanf("%lf",&weight[i]);
    }

    //summation of weights
    for(i=0;i<num;i++)
    {
        sum=sum+weight[i];
    }

    //average
    avg=sum/num;

    printf("\nThe average weight of each elephant seal is : %.3lf\n",avg);

    return 0;

}

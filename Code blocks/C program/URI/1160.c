#include<stdio.h>
int main()
{
    int pa,pb,t,i,count=0;
    double g1,g2;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %lf %lf",&pa,&pb,&g1,&g2);
        while(pa<=pb)
        {
            count++;
            pa=pa+(pa*g1/100);
            pb=pb+(pb*g2/100);
            if(count>100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }

        if(count<=100)
        {
            printf("%d anos.\n",count);
        }
    }

    return 0;
}

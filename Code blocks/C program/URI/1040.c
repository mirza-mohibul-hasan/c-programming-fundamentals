#include<stdio.h>
int main()
{
    double n1,n2,n3,n4,n5,avg1,avg2;
    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
    avg1=(n1*2+n2*3+n3*4+n4*1)/10.00;
    if(avg1>=7)
    {
        printf("Media: %.1lf\n",avg1);
        printf("Aluno aprovado.\n");
    }
   else if(avg1<5)
    {
        printf("Media: %.1lf\n",avg1);
        printf("Aluno reprovado.\n");
    }
    else if(avg1>=5.0&&avg1<=6.9)
    {
        scanf("%lf",&n5);
    avg2=(avg1+n5)/2.00;
    if(avg2>=5.0)
    {
        printf("Media: %.1lf\n",avg1);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1lf\n",n5);
        printf("Aluno aprovado.\n");
        printf("Media final: %.1lf\n",avg2);
    }
   else if(avg2<=4.9)
    {
        printf("Media: %.1lf\n",avg1);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1lf\n",n5);
        printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",avg2);
    }
    }
}

#include <stdio.h>

int main() {

    float a,b,c,d;
    float avg1;
    scanf("%f%f%f%f",&a,&b,&c,&d);

    avg1=((a*2)+(b*3)+(c*4)+(d*1))/(2+3+4+1);
    printf("Media: %.1f\n",avg1);

    if(avg1>=7.0)
    printf("Aluno aprovado.\n");
    else if(avg1<5.0)
    printf("Aluno reprovado.\n");
    else if(avg1>=5.0)
    printf("Aluno em exame.\n");

    float x;
    float avg2;
    scanf("%f",&x);
    printf("Nota do exame: %.1f\n",x);

    avg2= (avg1+x)/2;
    if(avg2>=5.0)
    printf("Aluno aprovado.\n");
    else
    printf("Aluno reprovado.\n");
    printf("Media final: %.1f\n",avg2);


    return 0;
}
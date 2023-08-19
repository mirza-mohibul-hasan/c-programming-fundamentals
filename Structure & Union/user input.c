#include<stdio.h>
struct x
{
    char name[100];
    int age;
    float salary;
};
int main()
{
    struct x p1, p2, p3;// local variable

    scanf("%d",&p1.age);
    scanf("%f",&p1.salary);

    printf("%d\n",p1.age);
    printf("%.2f\n",p1.salary);

    scanf("%s",&p1.name);
    printf("%s\n",p1.name);
}


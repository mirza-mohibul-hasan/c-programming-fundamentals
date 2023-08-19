#include<stdio.h>
struct x
{
    //char name[100];
    int age;
    float salary;
};
int main()
{
    struct x p1={34,3456.88}, p2, p3;

    //p1={34,3456.88};

    scanf("%d",&p2.age);
    scanf("%f",&p2.salary);

    p3=p1;

    printf("%d\n",p1.age);
    printf("%.2f\n",p1.salary);

    printf("%d\n",p2.age);
    printf("%.2f\n",p2.salary);

    printf("%d\n",p3.age);
    printf("%.2f\n",p3.salary);
}



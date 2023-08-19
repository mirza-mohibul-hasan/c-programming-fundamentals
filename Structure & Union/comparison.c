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

    p1.age=34;
    p1.salary=66.77;

    p2.age=34;
    p2.salary=33.66;

    if(p1.age==p2.age)
    {
        printf(" Age Same\n");
    }
    else
    {
        printf(" Age not Same\n");
    }

    if(p1.salary==p2.salary)
    {
        printf(" salary Same\n");
    }
    else
    {
        printf(" Salary not Same\n");
    }
}



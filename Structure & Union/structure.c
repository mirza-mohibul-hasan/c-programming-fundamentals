#include<stdio.h>
struct x
{
    char name[100];
    int age;
    float salary;
};
//struct x p1, p2, p3; // global variable
int main()
{
    /*struct x // Local structure
    {
        char name[100];
        int age;
        float salary;
    };*/
    struct x p1, p2, p3;// local variable

    p1.age=34;
    p1.name="Navid";
    p1.salary= 3333.54;

    printf("%d\n",p1.age);
}

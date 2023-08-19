#include<stdio.h>
struct x
{
    int age;
    float salary;
};
int main()
{
    struct x p[4];
    int i;

    for(i=0; i<4; i++)
    {
        printf("Enter information for person %d\n", i+1);

                fflush(stdin);
        printf("Enter age: ");
        scanf("%d",&p[i].age);

        printf("Enter salary: ");
        scanf("%d",&p[i].salary);
    }
    for(i=0; i<4; i++)
    {
        printf("Information for person %d\n", i+1);

        printf("Age: ");
        printf("%d\n",p[i].age);

        printf("Salary: ");
        printf("%d\n",p[i].salary);
    }

}



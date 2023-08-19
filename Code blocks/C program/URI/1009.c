#include<stdio.h>
int main()
{
    char name;
    scanf("%s",&name);
    double salary,sale,result;
    scanf("%lf %lf",&salary,&sale);
    result=salary+(sale*.15);
    printf("TOTAL = R$ %.2lf\n",result);
    return 0;


}

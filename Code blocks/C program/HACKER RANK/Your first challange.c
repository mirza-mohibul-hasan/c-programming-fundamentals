#include<stdio.h>

int solveMeFirst(int a, int b)
{
    return a+b;
}

int main()
{
    int x,y;

    scanf("%d %d",&x,&y);

    int result=solveMeFirst(x,y);

    printf("%d\n",result);

    return 0;

}

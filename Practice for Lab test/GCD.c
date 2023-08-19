#include <stdio.h>
int main()
{
    int x, y;
    int n1, n2, rem;
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        n1 = x;
        n2 = y;
    }
    else
    {
        n1 = y;
        n2 = x;
    }
    while (n2 != 0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    printf("GCD= %d\n", n1);
    printf(" LCM=%d\n", (x * y) / n1);
}

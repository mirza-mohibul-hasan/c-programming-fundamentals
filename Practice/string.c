#include<stdio.h>
#include<string.h>
int main()
{
    char a[100]="refat", b[100]="hasan";
    //scanf("%s %s", &a,&b);

    printf("%s %s\n", a, b);




    strcpy(a,b); printf("STRCPY= %s\n",a );

    return 0;
}

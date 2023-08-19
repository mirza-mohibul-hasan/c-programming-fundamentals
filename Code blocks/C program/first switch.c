#include<stdio.h>
main()
{
char ch;
printf("Enter the letter:");
scanf("%C",&ch);
switch(ch)
{
    case 'A':
        printf("A\n");
        break;
    case 'a':
        printf("a\n");
        break;
    case 'B':
        printf("B");
        break;
    case 'b':
        printf("b");
        break;
    default:
        printf("Nothing\n");

}

            return 0;
}

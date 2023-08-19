#include<stdio.h>           /*Importing standard stdio.h library in order to use printf(), scanf() etc */           /*Importing standard conio. library in order to use clrscr() etc */
int main()

{

    int N,i,j,a=1;

    printf("Enter the N value (number of lines):");


    scanf("%d",&N);

    for(i=1; i<=N; i++)
    {

        a=(i*(i+1))/2;              /*skipping the value of a by N value, as the digits need to be printed in -reverse*/

        for(j=1; j<i; j++)      /*starting of j loop for printing digits in a particular line*/
        {

            printf("%d*",a–);     /*printing the value in a(except the last digit in each line  with * and post- decrementing it,*/

        }

        printf("%d\n",a–);   /*Printing the last digit in each line without * and going to next line */

    }
}

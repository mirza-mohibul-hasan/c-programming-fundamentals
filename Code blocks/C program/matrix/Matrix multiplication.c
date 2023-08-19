#include <stdio.h>
 int main()
{
   int r1,r2,c1,c2,i,j,k,sum,mat1[10][10],mat2[10][10],result[10][10];

   printf("Enter the row and column of first matrix:");
   scanf("%d %d",&r1,&c1);

   printf("Enter the row and column of second matrix:");
   scanf("%d %d",&r2,&c2);

if(c1==r2)
{
       printf("\n\nEnter the elements of first matrix\n\n");
 for (i=0;i<r1;i++)
   {
        for (j=0;j<c1;j++)
         {
             printf("mat1[%d][%d]=",i,j);
             scanf("%d",&mat1[i][j]);
         }
   }
    printf("\n\nEnter the elements of second matrix\n\n");

   for (i=0;i<r2;i++)
   {
        for (j=0;j<c2;j++)
         {
             printf("mat2[%d][%d]=",i,j);
             scanf("%d",&mat2[i][j]);
         }
   }


   printf("Multiplication of entered matrices:-\n");

   for (i=0;i<r1;i++)
    {
      for (j=0;j<c2;j++)
      {
         for(k=1;k<=r2;k++)
         {
             sum=0;
         result[i][j]=sum + mat1[i][k]*mat2[k][j];
         result[i][j]=sum;
         if((result[i][j]<10)||(result[i][j]<-1))
         {
             printf("0%d\t",result[i][j]);
         }
         else
         {
             printf("%d\t",result[i][j]);
         }
         }
      }
      printf("\n");
   }
}
else
    printf("Enter the row and colummn values of first and second matrix");
   return 0;
}

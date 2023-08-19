#include<stdio.h>
main()
{
float num;
int choice;
printf("1:Feet to metter,2:metter to feet.\n");
printf("Enter your choice:");
scanf("%d",&choice);
if(choice ==1)
{
   printf("Enter number of feet:");
   scanf("%d",&num);
   printf("Metters:.3%f\n",num/3.28);
}
else
{
    printf("Enter number of metters:");
    scanf("%f",&num);
    printf("Feets:.3%f\n",num*3.28);
}
return 0;
}

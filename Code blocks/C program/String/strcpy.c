#include <stdio.h>
#include <string.h>
int main()
{
  char a[1000], b[1000];

  printf("Enter the first string:");
  gets(a);

  printf("Enter the second string:");
  gets(b);

  strcpy(a,b);

  printf("String obtained on concatenation: %s\n", a);

  return 0;
}




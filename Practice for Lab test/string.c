#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    char str2[20];
    char str3[20];
    char str4[20]="Mohibul";
    char str5[20] = "Hasan";

    scanf("%s",&str);
    printf("First: %s\n",str);
    //fflush(stdin);

    //gets(str2);
    //scanf("%[^\n]%*c", str2);
    //scanf("%[^\n]s",str2);
    //puts(str2);

    int l= strlen(str);
    printf("String Lenth: %d\n",l);

    strcpy(str3, str);
    printf("Copied to str3: %s\n", str3);

    strcat(str4, str5);
    printf("Str cat: %s\n", str4);

    int d=strcmp(str, str4);

    printf("Cmp Result: %d\n", d);

    printf("Reverse: %s\n", strrev(str));
}

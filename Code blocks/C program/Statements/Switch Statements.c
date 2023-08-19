#include<stdio.h>
int main()
{
    char building_first_letter;
    int x;
    scanf("%c",&building_first_letter);
    //printf("%c\n",building_first_letter);
    switch(building_first_letter)
    {
    case 'a':
        printf("Academic Building\n");
        break;
            case 'l':
        printf("Library\n");
        break;
            case 'm':
        printf("Medical centre\n");
            case 'd':
        printf("Dormatory\n");
            case 'c':
        printf("Cafeteria\n");
        break;

    }
}

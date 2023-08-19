#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50],result[100],i,j,t,k=0;
    scanf("%s %s",&a,&b);

    for(i=0,j=0 ; i<strlen(a),j<strlen(b) ; i++,j++)
    {
        if(a[i]=='\0' && b[j]=='\0')
            break;
        else
        {
        printf("%c",a[i]);
        printf("%c",b[i]);
        }
    }
    printf("\n");
    return 0;
}


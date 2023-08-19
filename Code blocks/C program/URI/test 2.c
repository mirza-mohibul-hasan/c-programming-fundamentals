#include<stdio.h>
int main()
{
    char a[50],b[50],result[100];
    int i,j,t,k;

    scanf("%d",&t);
    for(k=0; k<t; k++)
    {
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
    }
    return 0;
}


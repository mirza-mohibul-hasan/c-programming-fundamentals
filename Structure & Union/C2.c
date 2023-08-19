#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    int n,k;

    scanf("%d %d",&n, &k);
    scanf("%s",&s);

    printf("%s",s);

    int sl=strlen(s);
    int arr[100];
    arr[0]=-1;
    int i=0,j=-1;

    while(i<sl)
    {
        if(j==-1||s[i]==s[j])
        {
            i++;
            j++;
            arr[i]=j;
        }
        else
        {
            j=arr[j];
        }
    }

    k=k-1;

    while(k--)
    {
        for(i=arr[n]; i<n; i++)
            {
                printf("%c",s[i]);
            }
    }
    return 0;
}

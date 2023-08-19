#include<stdio.h>
#include<string.h>

int nex[1000];
int n,k;
void  next_l()
{
    int len=strlen(s);
    nex[0]=-1;
    int i=0,j=-1;
    while(i<len)
    {
        if(j==-1||s[i]==s[j])
        {
            i++;
            j++;
            nex[i]=j;
        }
        else
            j=nex[j];
    }
}
int main()
{

    char s[100];
    int n,k;
    scanf("%d %d",&n, &k);
    scanf("%s",&s);
    printf("%s",s);
    next_l();
    k-=1;

    while(k--)
    {
        for(int i=nex[n]; i<n; i++)
            {
                printf("%c",s[i]);
            }
    }

}

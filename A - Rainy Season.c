#include<stdio.h>
int main()
{
    char S[5];
    int count=0;
    scanf("%s",&S);
    for(int i=0; i<3; i++)
    {
        if(S[i]=='R')
        {
            count++;
        }
    }
    if(count==2)
    {
        if(S[0]==S[1]||S[1]==S[2])
        {
            printf("%d\n",2);
        }
        else
        {
            printf("%d\n",1);
        }
    }
    else
    {
        printf("%d\n",count);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int n,k;
    char s[100];
    char sub[100];
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        scanf("%s", &s)
        int st = 0;
        for(int i = 1; i < n; i ++)
        {
            sub = s.substr(i);
            if(s.find(sub) == 0)
            {
                st = i;
                break;
            }
        }
        if(st)
        {
            string ans = s.substr(0,st);
            for(int i = 1; i <= k; i ++) cout<<ans;
            printf("%s\n",sub)
        }
        else
        {
            for(int i = 1; i <= k; i ++) cout<<s;
            printf("\n");
        }
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,j,count=0;
    char input[100];

    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        scanf("%s",&input);
        j=0;
        while(1)
        {
            if(input[j] == ' ')
                break;
            else if(input[j]=='1')
            {
                count=count+2;
            }
            else if(input[j]=='2')
            {
                count=count+5;
            }
            else if(input[j]=='3')
            {
                count=count+5;
            }
            else if(input[j]=='4')
            {
                count=count+4;
            }
            else if(input[j]=='5')
            {
                count=count+5;
            }
            else if(input[j]=='6')
            {
                count=count+6;
            }
            else if(input[j]=='7')
            {
                count=count+3;
            }
            else if(input[j]=='8')
            {
                count=count+7;
            }
            else if(input[j]=='9')
            {
                count=count+6;
            }
            else if(input[j]=='0')
            {
                count=count+6;
            }
            j++;
        }
    }
    printf("%d\n",count);

}


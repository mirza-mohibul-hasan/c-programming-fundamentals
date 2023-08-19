#include<stdio.h>
#include<string.h>
int main()
{
    char w1[100],w2[100],w3[100];
    scanf("%s %s %s",&w1,&w2,&w3);
    if(strcmp(w1,"vertebrado")==0)
    {
        if(strcmp(w2,"ave")==0)
        {
            if(strcmp(w3,"carnivoro")==0)
            {
                printf("aguia\n");
            }
            else if(strcmp(w3,"onivoro")==0)
            {
                printf("pomba\n");
            }
        }

        else if(strcmp(w2,"mamifero")==0)
        {
            if(strcmp(w3,"onivoro")==0)
            {
                printf("homem\n");
            }
            else if(strcmp(w3,"herbivoro")==0)
            {
                printf("vaca\n");
            }
        }
    }


    else if(strcmp(w1,"invertebrado")==0)
    {
        if(strcmp(w2,"inseto")==0)
        {
            if(strcmp(w3,"hematofago")==0)
            {
                printf("pulga\n");
            }
            else if(strcmp(w3,"herbivoro")==0)
            {
                printf("lagarta\n");
            }
        }

        else if(strcmp(w2,"anelideo")==0)
        {
            if(strcmp(w3,"hematofago")==0)
            {
                printf("sanguessuga\n");
            }
            else if(strcmp(w3,"onivoro"))
            {
                printf("minhoca\n");
            }
        }
    }
    return 0;
}

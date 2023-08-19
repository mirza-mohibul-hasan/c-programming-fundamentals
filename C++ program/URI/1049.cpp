#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char w1[20],w2[20],w3[20];
    cin>>w1>>w2>>w3;

    if(strcmp(w1,"vertebrado")==0 && strcmp(w2,"ave")==0 && strcmp(w3,"carnivoro")==0)
        cout<<"aguia"<<endl;
    else if(strcmp(w1,"vertebrado")==0 && strcmp(w2,"ave")==0 && strcmp(w3,"onivoro")==0)
        cout<<"pomba"<<endl;
    else if(strcmp(w1,"vertebrado")==0 && strcmp(w2,"mamifero")==0 && strcmp(w3,"onivoro")==0)
        cout<<"homem"<<endl;
    else if(strcmp(w1,"vertebrado")==0 && strcmp(w2,"mamifero")==0 && strcmp(w3,"herbivoro")==0)
        cout<<"vaca"<<endl;

    else if(strcmp(w1,"invertebrado")==0 && strcmp(w2,"inseto")==0 && strcmp(w3,"hematofago")==0)
        cout<<"pula"<<endl;
    else if(strcmp(w1,"invertebrado")==0 && strcmp(w2,"inseto")==0 && strcmp(w3,"herbivoro")==0)
        cout<<"lagarta"<<endl;
    else if(strcmp(w1,"invertebrado")==0 && strcmp(w2,"anelideo")==0 && strcmp(w3,"hematofago")==0)
        cout<<"sanguessuga"<<endl;
    else if(strcmp(w1,"invertebrado")==0 && strcmp(w2,"anelideo")==0 && strcmp(w3,"onivoro")==0)
        cout<<"minhoca"<<endl;

    return 0;

}

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char w1[20],w2[20],w3[20];
    char a1[]="vertebrado",a2[]="invertebrado";
    char b1[]="ave", b2[]="mamifero", b3[]="inseto", b4[]="anelideo";
    char c1[]="carnivoro", c2[]="onivoro", c3[]="herbivoro", c4[]="hematofago";
    cin>>w1>>w2>>w3;

    if(strcmp(w1,a1)==0 && strcmp(w2,b1)==0 && strcmp(w3,c1)==0)
        cout<<"aguia"<<endl;
    else if(strcmp(w1,"a1")==0 && strcmp(w2,b1)==0 && strcmp(w3,c2)==0)
        cout<<"pomba"<<endl;
    else if(strcmp(w1,a1)==0 && strcmp(w2,b2)==0 && strcmp(w3,c2)==0)
        cout<<"homem"<<endl;
    else if(strcmp(w1,a1)==0 && strcmp(w2,b2)==0 && strcmp(w3,c3)==0)
        cout<<"vaca"<<endl;

    else if(strcmp(w1,a2)==0 && strcmp(w2,b3)==0 && strcmp(w3,c4)==0)
        cout<<"pula"<<endl;
    else if(strcmp(w1,a2)==0 && strcmp(w2,b3)==0 && strcmp(w3,c3)==0)
        cout<<"lagarta"<<endl;
    else if(strcmp(w1,a2)==0 && strcmp(w2,b4)==0 && strcmp(w3,c4)==0)
        cout<<"sanguessuga"<<endl;
    else if(strcmp(w1,a2)==0 && strcmp(w2,b4)==0 && strcmp(w3,c2)==0)
        cout<<"minhoca"<<endl;

    return 0;

}

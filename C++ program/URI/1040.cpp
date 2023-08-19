#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float n1,n2,n3,n4,n5,av1,av2;
    cin>>n1>>n2>>n3>>n4;
    av1=(n1*2+n2*3+n3*4+n4*1)/10.0;
    if(av1>=7)
    {
        cout<<"Media: "<<fixed<<setprecision(1)<<av1<<endl;
        cout<<"Aluno aprovado."<<endl;
    }
    else if(av1<5)
    {
        cout<<"Media: "<<fixed<<setprecision(1)<<av1<<endl;
        cout<<"Aluno reprovado."<<endl;
    }
    else if(av1>=5 && av1<=6.9)
    {
        cin>>n5;
        av2=(av1+n5)/2.0;
        cout<<"Media: "<<fixed<<setprecision(1)<<av1<<endl;
        cout<<"Aluno em exame."<<endl;
        cout<<"Nota do exame: "<<n5<<endl;
        if(av2>=5)
        {
            cout<<"Aluno aprovado."<<endl;
        }
        else if(av2<=4.9)
        {
            cout<<"Aluno reprovado."<<endl;
        }
        cout<<"Media final: "<<fixed<<setprecision(1)<<av2<<endl;

    }
    return 0;
}

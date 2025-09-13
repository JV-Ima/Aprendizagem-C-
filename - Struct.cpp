#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;

struct Perfil{
    char nome[50];
    char sexo[1];
    int idade;
    float salario;
};

int main(){
    int i;
    int qnt; //quantidade de pessoas para operar

    cout<<"Digite o nome da quantidade de perfils para operar:";
    cin>>qnt;
    Perfil perfis[qnt];

    for (i=0;i<qnt;i++){
        cout<<"digite o nome da pessoa:"<<i+1;
        cin>>perfis[i].nome;
        //
        cout<<"O sexo da pessoa:"<<i+1;
        cin>>perfis[i].sexo;
        //
        cout<<"A sua idade:";
        cin>>perfis[i].idade;
        //
        cout<<"O salário:";
        cin>>perfis[i].salario;
        //
    }

    cout<<"==>PERFIS<==";
    for (i=0;i<qnt;i++){
        cout<<"PESSOA "<<i<<endl;
        cout<<"NOME:"<<perfis[i].nome<<endl;
        cout<<"SEXO:"<<perfis[i].sexo<<endl;
        cout<<"IDADE:"<<perfis[i].idade<<endl;
        cout<<"SALÁRIO:"<<perfis[i].salario<<endl;
    }

}

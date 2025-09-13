#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <string.h>
#include <cctype>
#include <cstring>

using namespace std;

int main (){
    //COMPARA��O DE STRINGS
    int i=0;
    while (i == 0){
        char nome1 [10];
        char nome2 [10];
        int resultado;
        cout<<"Digite as palavras: "<<endl;
        cin>>nome1>>nome2;

        resultado=strcmp(nome1,nome2);

        if (!resultado){
            cout<< "As duas palavras s�o iguais!!"<<endl;
            i++;
        }else{
            cout<<"As duas palavras N�O s�o iguais!!"<<endl;
            cout<<"/////////////////////////////////"<<endl;
        }
    }

    //VER TAMANHO DA STRING
    char STring [10];
    cout<<"Digite uma string para ent�o medir o seu tamanho:";
    cin>>STring;
    int tamanho = strlen(STring);
    cout<<"O tamanho dessa String � "<<tamanho<<endl;
    cout<<"/////////////////////////////////"<<endl;

    //cin.getline e toupper
    char nomeCompleto [20];
    cout<<"Digite o seu Nome: ";
    cin.getline(nomeCompleto,20);
    cout<<"O seu nome completo é: "<<nomeCompleto<<endl;

    for (size_t i{0};i<strlen(nomeCompleto);i++){
        if (isalpha(nomeCompleto[i]))
            nomeCompleto[i]=toupper(nomeCompleto[i]);
    }
    cout<<"Seu nome em MAIÚSCULO:"<<nomeCompleto<<endl;




  }

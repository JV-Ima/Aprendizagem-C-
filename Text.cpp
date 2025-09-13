#include <stdlib.h>
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <locale.h>
using namespace std;

int anosAbaixo3(int devAnos){
    cout<< "Hmmm... Você tem um longo caminho pela frente e muito no que aprender..."<<endl;
}
int anosAcima3(int devAnos){
    cout<<"Então você tem uma experiência intermediária na área por "<< devAnos <<"?  Já é um bom progresso!"<<endl;
}
int anosAcima15(int devAnos){
    cout<<"Você deve ser um baita programador com tamanha experiência que você tem, hein!?"<<endl;
}
/////////////////////////////////
////////////////////////////////
int main (){
    int pnts = 0, anos;
    cout<<"Olá, meu nome é Fernando, serei o seu assistente virtual para a sua pesquisa. Eu gostaria de saber quantos anos você tem como dev?"<<endl;

    int validade = 0;
    while (validade == 0){
        cin>>anos;
        if (anos < 3){
            anosAbaixo3(anos);
            validade = true;
        } else if (anos >= 3 && anos<15){
            anosAcima3(anos);
            validade = true;
        } else if (anos >=15){
            anosAcima15(anos);
            validade = true;
        } else{
            cout<<"Valor inválido, tente outra vez";
        }
    }

}

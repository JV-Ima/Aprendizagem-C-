#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <vector>
using namespace std;

void empilhar (vector <int>& pilha, int elemento){
    // elem: o valor numérico q vai ser inserido
    pilha.push_back(elemento);
}

void desempilhar (vector <int>& pilha){
    if (!pilha.empty()){ //Irá checar se a pilha está vazia
        pilha.pop_back ();
        cout<< "Numero Removido!"<<endl;
        cout<<endl;
    }
    else{
        cout<<"PILHA VAZIA!"<<endl;
        cout<<endl;
    }
}


void imprimir (vector <int>& pilha, int elemento){
    if (!pilha.empty()){
        for (auto& elemento: pilha){
            cout <<elemento<<" - ";
        }
    }
    else{
        cout<<"PILHA VAZIA!"<<endl;
        cout<<endl;
    }
}

void somatoria (vector <int>& pilha, int elemento){
    int acumulador=0; //irá acumular e somar todos os valores dentro da pilha
    if (!pilha.empty()){
        for (auto& elemento: pilha){
            acumulador += elemento;
        }
        cout<<"Valor Somado: "<<acumulador<<endl;
        cout<<endl;
    }
    else{
        cout<<"PILHA VAZIA!"<<endl;
        cout<<endl;
    }
}

int main (){
    vector <int> mPilha;
    int opc;
    int elem;
    while (opc !=0){
        cout<<"PILHAS COM VETORES"<<endl;
        cout<<"1. Empilhar"<<endl;
        cout<<"2. Desempilhar"<<endl;
        cout<<"3. Imprimir"<<endl;
        cout<<"4. Somar valores"<<endl;
        cout<<"-----------------"<<endl;
        cout<<"Escolha uma das opcs acima:";
        cin>>opc;

        if (opc==1){
            while (elem!=0){
                cout<<"Insira um valor para empilhar:";
                cin>>elem;
                empilhar(mPilha, elem);
                cout<<"Numero Empilhado!"<<endl;

                if (elem==0){
                    break;
                }
            }
        }
        else if (opc==2){
            desempilhar (mPilha);
            cout<<"Numero desempilhado!"<<endl;
            cout<<endl;
        }
        else if (opc==3){
            imprimir(mPilha, elem);
        }
        else if (opc==4){
            somatoria (mPilha, elem);
        }
    }
}

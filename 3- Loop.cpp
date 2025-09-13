#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <vector>
using namespace std;

int main (){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int i= 0; //contador
    int num= 0;
    while (i <= 10){
        cout <<"Número "<<i<<" - valor "<< num<<endl;
        i++;
        num+=10;
    }
    cout <<"============================"<<endl;
    int I, NUM= 0;
    for (I=0; I<=10; I++){
        cout <<"NÚMERO "<<I<<" - VALOR "<<NUM<<endl;
        NUM+=10;
    }
    cout <<"============================"<<endl;
    ////////////
    int a1 [5] {1,2,3,4,5};
    for (auto A1: a1){
        cout<<A1<<endl;
    }
    cout <<"============================"<<endl;
    vector <int> vetor {10,20,30,40,50,60};

    float mediaVetor{};
    float acVetor{};
    for (auto vetores: vetor){
        acVetor+=vetores;
    }
    mediaVetor = acVetor/vetor.size();
    cout <<"Média dos Elementos dentro do Vetor: "<<mediaVetor<<endl;
    cout <<"============================"<<endl;
    vector <string> frase {"Vetor Para Teste"};
    for (auto Frase: frase){
        cout<<Frase<<endl;
    }

}

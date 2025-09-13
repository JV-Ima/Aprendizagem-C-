#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;

int main (){
    int i;
    int opc;
    int tam = 5;
    int vetor [5]; //declarando o vetor e o seu tamanho ([Tamanho])

    //INICIALIZANDO UM VETOR
    for (i=0;i<tam;i++){
        cout<<"Qual valor você quer dar para o índice "<<i<<"?"<<endl;
        cin>> vetor[i];
    }

    for (i=0;i<tam;i++){
        cout <<"índice "<<i<< " valor -> "<< vetor[i]<<endl;
    }

}

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
        cout<<"Qual valor voc� quer dar para o �ndice "<<i<<"?"<<endl;
        cin>> vetor[i];
    }

    for (i=0;i<tam;i++){
        cout <<"�ndice "<<i<< " valor -> "<< vetor[i]<<endl;
    }

}

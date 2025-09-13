#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;

class classe{
public:
    char nome[10];
    int num;

    //função
    void Imprimir (){
        cout<<"Nome: "<<nome<<endl;
        cout<<"Número: "<<num<<endl;
    }
};

class calcular{
public:
    int num1,num2;

    int somar (int n1, int n2){
        int soma = n1 + n2;
        cout <<"Soma-> "<<soma<<endl;
    }

    int subtracao (int n1, int n2){
        int sub = n1 - n2;
        cout <<"Subtração-> "<<sub<<endl;
    }

    int multiplicacao (int n1, int n2){
        int mult = n1 * n2;
        cout <<"Multiplicação-> "<<mult<<endl;
    }

};

int main(){
    classe objeto1;

    cout<<"Digite o nome do objeto: ";
    cin>>objeto1.nome;
    cout<<"Digite o número do objeto: ";
    cin>>objeto1.num;
    objeto1.Imprimir();
    /*--------------------------------*/
    calcular objeto2;

    cout<<"Digite o valor do número 1->";
    cin>>objeto2.num1;
    cout<<"Digite o valor do número 2->";
    cin>>objeto2.num2;
    objeto2.somar (objeto2.num1,objeto2.num2);
    objeto2.subtracao (objeto2.num1,objeto2.num2);
    objeto2.multiplicacao (objeto2.num1,objeto2.num2);
}

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    bool resultado;
    resultado = ((100/10) == (5*2));

    cout<<resultado<<endl;
    cout<<noboolalpha<<endl;
    resultado = ((100/50)!=(4/2));
    cout<<resultado<<endl;
    cout<<"==========================="<<endl;

    bool igual{false}, nao_igual{false};
    int n1,n2;
    cout<<boolalpha;
    cout<<"Digite aqui DOIS n�meros: ";
    cin>>n1>>n2;
    igual=(n1==n2);
    nao_igual=(n1!=n2);
    cout<<"Os n�meros s�o iguais? -> "<<igual<<endl;
    cout<<"Os n�meros s�o diferentes? -> "<<nao_igual<<endl;
    cout<<"==========================="<<endl;

    bool iguais{false};
    bool dois_nao_iguais{false};
    bool diferentes{false};
    int num1,num2,num3;

    cout<<boolalpha;
    cout<<"Digite aqui TR�S n�meros: ";
    cin>>num1>>num2>>num3;

    iguais = (num1==num2) && (num2==num3);
    dois_nao_iguais = ((num1 == num2) || (num2 == num3) || (num1 == num3)) && !(iguais || diferentes);
    diferentes = (num1!=num2) && (num2!=num3) && (num1!=num3);
    cout<<"os n�meros s�o iguais? -> "<<iguais<<endl;
    cout<<"Dois dos n�meros s�o iguais? -> "<<dois_nao_iguais<<endl;
    cout<<"os tr�s n�meros s�o diferentes um do outro?"<<diferentes<<endl;

}

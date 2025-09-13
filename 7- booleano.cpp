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
    cout<<"Digite aqui DOIS números: ";
    cin>>n1>>n2;
    igual=(n1==n2);
    nao_igual=(n1!=n2);
    cout<<"Os números são iguais? -> "<<igual<<endl;
    cout<<"Os números são diferentes? -> "<<nao_igual<<endl;
    cout<<"==========================="<<endl;

    bool iguais{false};
    bool dois_nao_iguais{false};
    bool diferentes{false};
    int num1,num2,num3;

    cout<<boolalpha;
    cout<<"Digite aqui TRÊS números: ";
    cin>>num1>>num2>>num3;

    iguais = (num1==num2) && (num2==num3);
    dois_nao_iguais = ((num1 == num2) || (num2 == num3) || (num1 == num3)) && !(iguais || diferentes);
    diferentes = (num1!=num2) && (num2!=num3) && (num1!=num3);
    cout<<"os números são iguais? -> "<<iguais<<endl;
    cout<<"Dois dos números são iguais? -> "<<dois_nao_iguais<<endl;
    cout<<"os três números são diferentes um do outro?"<<diferentes<<endl;

}

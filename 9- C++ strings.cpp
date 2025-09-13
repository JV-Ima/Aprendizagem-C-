#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <string.h>
#include <cctype>
#include <cstring>

using namespace std;

int main (){
    string s1,s2, frase;
    s1= "String 1 ";
    s2= "- String 2";
    frase = s1 + s2;
    cout<<frase + " - Uma concatenacao de strings"<<endl;
    /////
    string string0{"Frase"};
    string0.at(0)='C'; //Tem que usar aspas de linha �nica ao inv�s de Aspas
    cout<<string0<<endl;
    /////
    string frase1= ("A String 1"), frase2= ("A String 2");
    cout<<frase1.substr(0,8)<<endl;
    cout<<frase2.substr(2,8)<<endl;
    string fraseGrande= ("Uma frase grande em uma string");
    cout<<fraseGrande.substr(0,10);cout<<fraseGrande.substr();
    ////
    string stringVazia;
    cout<< "Digita uma frase aqui: "
    getline(cin, stringVazia);
    cout<< "Frase digitada: " << stringVazia << endl;

}

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int num1 = 2;
    int num2 = 3;
    int resultado = num1 + num2;
    cout <<"Hello World"<<endl;
    cout <<"Linha 2"<< endl;
    cout <<"Isso é um texto em português" <<endl;
    cout << "o resultado da soma de " << num1 << " e " << num2 << " é: " << resultado << endl;


}

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;

int main (){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int numInput;
    int num1 = 4, resultado;
    cout << "Insira um n�mero ao lado: ";
    cin >> numInput;
    resultado=numInput + num1;
    cout << "A soma do n�mero com valor recebido somado com 4 �: " << resultado;
}

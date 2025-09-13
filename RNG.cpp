#include <stdlib.h> //Rand()
#include <stdio.h>
#include <ctime>
#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    srand (time(NULL));
    int num1,num2;
    int resposta;
    int resultado;
    bool i;

    while(i == false){
        num1 = rand() %20+1; //range from 1 to 20
        num2 = rand() %30+1; //range from 1 to 30
        resultado = num1 + num2;
        i= false;
        cout<<"Qual a soma de " <<num1<< " com " <<num2<<"?"<<endl;
        cin>>resposta;

        if (resposta == resultado){
            cout<<"RESPOSTA CORRETA!"<<endl;
            i = true;
        }else{
            cout<<"RESPOSTA ERRADA!"<<endl;
        }
    }
}

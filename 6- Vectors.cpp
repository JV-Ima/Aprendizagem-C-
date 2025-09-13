#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <vector>
using namespace std;


int main(){
    vector <int> numeros {10,20,30,40};
    cout<<numeros.at(0)<<endl; //10
    cout<<numeros.at(3)<<endl; //40
    cout<<numeros.at(2)<<endl; //30
    ////////////////////////////////////
    vector <string> nomes (5);
    int i;
    for (i=0;i<=4;i++){
        cout<<"Digite aqui um nome no índice "<<i<<": ";
        cin>>nomes.at(i);
    }
    for (i=0;i<=4;i++){
        cout<<nomes.at(i)<<endl;
    }
    ////////////////////////////////////
    cout<<"-----------------"<<endl;
    vector <int> nums {15,27,31,98,75};
    int numero_adicionado{0};
    cout<<"insira um valor numérico ao lado: "<<endl;
    cin>>numero_adicionado;
    nums.push_back(numero_adicionado);
    cout<<nums.at(0)<<endl;
    cout<<nums.at(1)<<endl;
    cout<<nums.at(2)<<endl;
    cout<<nums.at(3)<<endl;
    cout<<nums.at(4)<<endl;
    cout<<nums.at(5)<<endl;
    ////////////////////////////////////
    vector<vector<int>>padrao_xadrez{
        {0,1,0,1},
        {1,0,1,0},
        {0,1,0,1},
        {1,2,3,4}
    };
    cout<<padrao_xadrez[0][0]<<"-";
    cout<<padrao_xadrez[0][1]<<"-";
    cout<<padrao_xadrez[0][2]<<"-";
    cout<<padrao_xadrez[0][3];
    cout<<endl;
    cout<<padrao_xadrez[3][0]<<"-";
    cout<<padrao_xadrez[3][1]<<"-";
    cout<<padrao_xadrez[3][2]<<"-";
    cout<<padrao_xadrez[3][3];
}

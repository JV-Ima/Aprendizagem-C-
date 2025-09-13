#include <stdlib.h>
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <locale.h>
#include <iomanip>
#include <vector>

using namespace std;
const float pi= 3.14;

int somatoria (int A, int B){
    int soma = A + B;
    return soma;
}
double calc_areaCirculo (float raio){
    return pi * (raio*raio);

}
void areaCirculo (){
    float raio;
    cout<< "Digite o valor do Raio: ";
    cin>>raio;
    cout<< "A área do circulo com o raio dado de "<<raio<< "cm é igual a "<<calc_areaCirculo(raio)<<" metros quadrados."<<endl;
}
//////////////////////////////////////////
//////////////////////////////////////////
void pass_by_value1 (int num);
    void pass_by_value2 (string str);
    void pass_by_value3 (vector<string> v);
    void print_vector(vector<string> v);

    void pass_by_value1 (int num){
        num=1000;
    }
    void pass_by_value2 (string str){
        str="Changed";
    }
    void pass_by_value3 (vector<string> v){
        v.clear(); //Irá deletar tds os elementos dentro do vector
    }
    void print_vector (vector<string> v){
        for (auto str:v){
            cout<<str<<" ";
        }
        cout<<endl;
    }
//////////////////////////////////////////
//////////////////////////////////////////
double calc_cost (double base_cost, double tax_rate=0.06, double shipping= 3.50);
double calc_cost (double base_cost, double tax_rate, double shipping){
    return base_cost += (base_cost *tax_rate)+shipping;
//////////////////////////////////////////
//////////////////////////////////////////
void greeting (string name, string prefix= "Sr.", string suffix= "");
void greeting (string name, string prefix, string suffix){
    cout<<"Hello "<<prefix+" "+name+" "+suffix<<endl;
}
int main (){
    setlocale(LC_ALL, "");
    int a,b;
    int soma;
    cout << "Digite o valor de A: ";
    cin >> a;
    cout <<"Digite o valor de B: ";
    cin>> b;

    soma = somatoria (a,b);

    cout << "A somatória de A e B é igual a " << soma;
    //////
    areaCirculo();
    cout<<"================================"<<endl;
    int num {10};
    int another_num{20};

    cout<< "num before calling pass_by_value1: "<<num<<endl;
    pass_by_value1(num);
    cout<<"num after calling pass_by_value1: "<<num<<endl;

    cout<<"another num before calling pass_by_value_1: "<<another_num<<endl;
    pass_by_value1 (another_num);
    cout<<"another num after calling pass_by_value_1: "<<another_num<<endl;

    string name {"Frank"};
    cout<<"name before calling pass_by_value_2: "<<name<<endl;
    pass_by_value2 (name);
    cout<<"name after calling pass_by_value_2: "<<name<<endl;

    vector <string> stooges {"Larry","Moe","Curly"};
    cout<<"3 stooges before calling pass_by_value_3: ";
    print_vector(stooges); //irá imprimir os
    pass_by_value3 (stooges);
    cout<<"3 stooges after calling pass_by_value_3: "<<endl;
    cout<<"================================"<<endl;

    double cost {0};
    cost= calc_cost (100.00, 0.08, 4.25);

    cout<<fixed<<setprecision (2);
    cout<<"Cost is: "<<cost<<endl;

    cost= calc_cost (100.00, 0.08);
    cout<<"Cost is: "<<cost<<endl;

    cost=calc_cost (200.00);
    cout<<"Cost is: "<<cost<<endl;
    cout<<"================================"<<endl;
    greeting("Jones", "Dr. ", "M.D")
}

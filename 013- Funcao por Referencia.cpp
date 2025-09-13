#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <vector>
using namespace std;

void pass_by_ref1 (int &num);
void pass_by_ref2 (string &str);
void pass_by_ref3 (vector <string> &vec);
void pass_by_ref4 (const vector <string> &vec); //constante
/////////////////////
void pass_by_ref1 (int &num){
    num=1000;
}
void pass_by_ref2 (string &str){
    str="Changed String";
}
void pass_by_ref3 (vector <string> &vec){
    vec.clear();
}
void print_vector(const vector <string> &vec){
    for (auto i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main (){
    int num= 10;
    int num2= 20;
    string nome= "frank";

    cout<<"number before calling pass_by_ref1: "<<num<<endl;
    pass_by_ref1 (num);
    cout<<"number after calling pass_by_ref1: "<<num<<endl;

    cout<<"num2 before calling pass_by_ref1: "<<num2<<endl;
    pass_by_ref1 (num2);
    cout<<"num2 after calling pass_by_ref1: "<<num2<<endl;
    cout<<endl;

    cout<<"'frank' before calling pass_by_ref2: "<<nome<<endl;
    pass_by_ref2 (nome);
    cout<<"'frank' after calling pass_by_ref2: "<<nome<<endl;
    cout<<endl;

    vector <string> stooges {"Larry","Moe","Curly"};
    cout<<"3 stooges before calling pass_by_ref3:"<<endl;
    print_vector(stooges);
    pass_by_ref3(stooges);
    cout<<"3 stooges after calling pass_by_ref3: "<<endl;
    print_vector(stooges);


}

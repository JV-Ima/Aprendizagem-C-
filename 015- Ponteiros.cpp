#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <vector>
using namespace std;
/*
tipo_da_Variáveel *nomePonteiro {nullptr}
*/

int main (){
int num= 10;

cout<<"Value of 'num': "<<num<<endl;
cout<<"Size of 'num': "<<sizeof num<<endl;
cout<<"Address of 'num': "<< &num<<endl;
cout<<endl;

getch();
int *p;
cout<<"Value of p: "<<p<<endl; //garbage, the hexa address
cout<<"Size of p: "<<sizeof p<<endl;
cout<<"Address of p: "<<&p<<endl;
cout<<endl;

getch();
p=nullptr; //Declarando que o ponteiro p está apontando para nada, o nullptr
cout<<"Value of p: "<<p<<endl; //como está apontando apra nada, o seu valor é 0
cout<<endl;

getch();
int *p1= nullptr;
double *p2= nullptr;
unsigned long long *p3= nullptr;
vector <string> *p4= nullptr;
string *p5= nullptr;

cout<<"size of p1: "<<sizeof p1<<endl;
cout<<"size of p2: "<<sizeof p2<<endl;
cout<<"size of p3: "<<sizeof p3<<endl;
cout<<"size of p4: "<<sizeof p4<<endl;
cout<<"size of p5: "<<sizeof p5<<endl;
//irão imprimir 4 pois são 4 bytes
cout<<endl;

getch();
int score= 10;
int *scorePtr= nullptr;
scorePtr= &score; //o ponteiro scoreptr está apontado no endereço da variável score
cout<<"Value of Score: "<<score<<endl;
cout<<"Address of Score: "<<&score<<endl;
cout<<"Value of scorePtr: "<<scorePtr<<endl;
cout<<endl;
//////////////////////////////////////////////////
//////////////////////////////////////////////////
getch();
cout<<"DEREFERENCING POINTERS"<<endl;

int _score= 100;
int *_scorePtr= &_score;
cout<<"Value of _scorePtr: "<<*_scorePtr<<endl;

*_scorePtr= 200;
cout<<"Value of _score: "<<_score<<endl;
cout<<endl;

getch();
double highTemp= 100.7;
double lowTemp= 34.7;
double *tempPtr= &highTemp;

cout<< "Temperature Pointer: "<<*tempPtr<<endl;
tempPtr= &highTemp;
cout<< "New Temperature Pointer: "<<*tempPtr<<endl;
//////////////////////////////////////////////////
//////////////////////////////////////////////////
getch();
cout<<"ARRAYS AND POINTERS"<<endl;




}

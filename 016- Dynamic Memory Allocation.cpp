#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;

int main (){
    int *intPtr= nullptr;
    intPtr= new int; //irá re-alocar ao heap em tmp real, e seu endereço será armazenado no ponteiro int
    cout<<intPtr<<endl; //Irá imprimir o seu endereço hexadecimal intPtr

    getch ();
    //Irá apagar o endereço dentro do ponteiro intPtr
    delete intPtr;

    size_t size=0;
    double *tempPtr = nullptr;

    cout<<"How many temps?"<<endl;
    cin>>size;

    tempPtr= new double [size];
    cout<<tempPtr<<endl;
    delete [] tempPtr;

}

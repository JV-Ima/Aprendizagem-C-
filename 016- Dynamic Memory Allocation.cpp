#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;

int main (){
    int *intPtr= nullptr;
    intPtr= new int; //ir� re-alocar ao heap em tmp real, e seu endere�o ser� armazenado no ponteiro int
    cout<<intPtr<<endl; //Ir� imprimir o seu endere�o hexadecimal intPtr

    getch ();
    //Ir� apagar o endere�o dentro do ponteiro intPtr
    delete intPtr;

    size_t size=0;
    double *tempPtr = nullptr;

    cout<<"How many temps?"<<endl;
    cin>>size;

    tempPtr= new double [size];
    cout<<tempPtr<<endl;
    delete [] tempPtr;

}

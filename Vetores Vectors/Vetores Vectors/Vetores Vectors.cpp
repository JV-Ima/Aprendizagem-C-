#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    vector <int> valores {1,2,3,4,5,6,7,8,9,0};
    int i= 0;
    while (i < 10)
    {
        cout << "Vector no �ndice " << i << ": " << valores.at(i) << endl;
        i++;
    }
    cout << "========================" << endl;


    vector <int> valores2 {10,20,30,40,50};
    for (i=0; i < 5; i++)
    {
        cout << "Valor no �ndice " << i << endl;
        cin >> valores2.at(i);
    }
    for (i = 0; i < 5; i++)
    {
        cout << "Vector no �ndice " << i << ": " << valores2.at(i) << endl;
    }
    cout << "Tem ao menos " << valores2.size() << " no vetor" << endl;

// Vetor 2D
    vector <vector<int>> Matriz
    {
        {3,4,3,5,3},
        {4,4,5,2,5},
        {3,4,5,5,1}
    };
    cout << "FILERA 1: " << endl;
    cout << Matriz.at(0).at(0) << " = ";
    cout << Matriz.at(0).at(1) << " = ";
    cout << Matriz.at(0).at(2) << " = ";
    cout << Matriz.at(0).at(3) << " = ";
    cout << Matriz.at(0).at(4);
    cout << endl;

    cout << "FILERA 2: " << endl;
    cout << Matriz.at(1).at(0) << " = ";
    cout << Matriz.at(1).at(1) << " = ";
    cout << Matriz.at(1).at(2) << " = ";
    cout << Matriz.at(1).at(3) << " = ";
    cout << Matriz.at(1).at(4);
    cout << endl;

    cout << "FILERA 3: " << endl;
    cout << Matriz.at(2).at(0) << " = ";
    cout << Matriz.at(2).at(1) << " = ";
    cout << Matriz.at(2).at(2) << " = ";
    cout << Matriz.at(2).at(3) << " = ";
    cout << Matriz.at(2).at(4);
    cout << endl;


    
}

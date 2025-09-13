#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <string.h>
#include <cctype>
#include <cstring>

using namespace std;

int main (){
    string str0;
    string str1 {"Apple"};
    string str2 {"banana"};
    string str3 {"kiwi"};
    string str4 {"apple"};
    string str5 = str1;
    string str6 {str1,0,3};
    string str7 (10, 'x');

    cout<<"Initialization"<<endl;
    cout<<"==========================="<<endl;
    cout<<"str1 intialized to: "<<str1<<endl;
    cout<<"str2 intialized to: "<<str2<<endl;
    cout<<"str3 intialized to: "<<str3<<endl;
    cout<<"str4 intialized to: "<<str4<<endl;
    cout<<"str5 intialized to: "<<str5<<endl;
    cout<<"str6 intialized to: "<<str6<<endl;
    cout<<"str7 intialized to: "<<str7<<endl;

    cout<<"Comparison"<<endl;
    cout<<"==========================="<<endl;
    cout<<boolalpha;
    cout<<str1<<" == "<<str5<<": "<<(str1==str5)<<endl;
    cout<<str1<<" == "<<str2<<": "<<(str1==str2)<<endl;
    cout<<str1<<" != "<<str2<<": "<<(str1!=str2)<<endl;
    cout<<str1<<" < "<<str2<<": "<<(str1<str5)<<endl;
    cout<<str2<<" > "<<str1<<": "<<(str2>str1)<<endl;
    cout<<str4<<" < "<<str5<<": "<<(str4>str5)<<endl;
    cout<<str1<<" == "<<"Apple"<<": "<<(str1=="Apple")<<endl;

    cout<<"Assignment"<<endl;
    cout<<"==========================="<<endl;
    str1= "Watermelon";
    cout<<"str1 is now: "<<str1<<endl;
    str2= str1;
    cout<<"str2 is now: "<<str2<<endl;
    str3= "Frank";
    str3[0]= 'C'; //Mudança no índice 0 de Frank
    cout<<"str3 changes 1st letter to 'C': "<<str3<<endl;
    //Melhor usada para programação orientada a objeto
    str3.at(0)= 'P';
    cout<<"str3 changes 1st letter top 'P': "<<str3<<endl;

    cout<<"Concatenation"<<endl;
    cout<<"==========================="<<endl;
    str3= "Watermelon";
    str3= str5+" and "+str2+" juice";
    cout<<str3<<endl;

    cout<<"For Loop"<<endl;
    cout<<"==========================="<<endl;
    str1= "Apple";
    for (size_t i {0};i<str1.length();i++){
        cout<<str1.at(i)<<" - ";
    }
    cout<<endl;
    //Range-based
    for(char c:str1){
        cout<<c<<" - ";
    }
    cout<<endl;

    cout<<"Substrings"<<endl;
    cout<<"==========================="<<endl;
    str1= "This is a test";

    cout<<str1.substr(0,4)<<endl; //This
    cout<<str1.substr(5,2)<<endl; //is
    cout<<str1.substr(10,4)<<endl; //test

    cout<<"Erase"<<endl;
    cout<<"==========================="<<endl;
    cout<<str1.erase(9,6)<<endl;

    cout<<"getLine"<<endl;
    cout<<"==========================="<<endl;
    string familyName{};
    cout<<"Enter your family name: ";
    getline (cin,familyName);
    cout<<"Your family name is: "<<familyName<<endl;

    cout<<"Find"<<endl;
    cout<<"==========================="<<endl;
    str1= "The secret word is aha";
    string word {};
    cout<<"Insert the word to find"<<endl;
    cin>>word;

    size_t position= str1.find(word);
    if (position!=string::npos){
        cout<<"Found "<<word<< " at position: "<< position<<endl;
    }
    else{
        cout<<"Sorry, "<<word<<" not found!"<<endl;
    }
    cout<<endl;



}

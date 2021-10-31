#include<iostream>
using namespace std;
int main(){
    int a;  //variable declaration
    a=12;   //variable initialisation

    cout<<"Size of int "<<sizeof(a)<<endl;

    float b;
    cout<<"Size of float "<<sizeof(b)<<endl;

    char c;
    cout<<"Size of char "<<sizeof(c)<<endl;

    bool d;
    cout<<"Size of bool "<<sizeof(d)<<endl;

    short int si;
    long int li;
    cout<<"Size of shortint "<<sizeof(si)<<endl;
    cout<<"Size of longint "<<sizeof(li)<<endl;



    return 0;
}
/*
    Write a C++ program to overload the + operator to concatenate two strings.
*/
#include<iostream>
#include<string.h>
using namespace std;

class A{
    public:
    char name[25];

    A(){
        strcpy(name," ");
    }

    A(char n[25]){
        strcpy(name,n);
    }

    void display(){
        cout<<"The name is - "<<name<<endl;
    }

    A operator + (A &obj){
        A r;

        strcpy(r.name,name);
        strcat(r.name," ");
        strcat(r.name,obj.name);

        return r;
    }
};

int main(){

    A a1("Shreyansh");
    A a2("Gurjar");
    A a=a1+a2;

    a.display();
}
/*
    Declare a class called my_string having char * str_ptr as a member, used to point to a string. Define
a constructor for initializing member. Define an overloaded operator + to be applied on two
operands of type class my_string for concatenating strings pointed by str_ptr of operands. The
resultant string is placed in a new object of type class my_string which is returned. Define main to
show the usage of these functions 
*/

#include<iostream>
#include<cstring>
using namespace std;

class my_string{
    public:
    char name[100];

    my_string(){
        strcpy(name," ");
    }
    my_string(char n[100]){
        strcpy(name,n);
    }

    my_string operator + (my_string &a){
        char t[100];

        strcpy(t,name);
        strcat(t,a.name);

        return t;
    }

    void display(){
        cout<<"The string is - "<<name<<endl;
    }
};

int main(){
    my_string str1("Hello");
    my_string str2("world");

    my_string str=str1+str2;

    str.display();



}
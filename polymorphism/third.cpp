/*
    Program to create a class THREE-D contains data members like X, Y, Z having dimensions.
    Include constructor to initialize data. and overload Unary +, -, ++, -- and Binary * Operator
*/

#include<iostream>
using namespace std;

class number{
    public:

    int value;

    number(int x=0) :value(x) {}

    void display(){
        cout<<"The value is = "<<value<<endl;
    }

    number operator -(){
        return number(-value);
    }

    number operator + (const number& obj){
        return number(value + obj.value);
    }

    number operator ++(){
        return number(++value);
    }

    number operator --(){
        return number (--value);
    }

    number operator * (){
        return number(value * value);
    }

};

int main(){
    number num(5);
    num.display();

    number neg = -num;
    neg.display();

    number pls = ++num;
    pls.display();

    number min = --num;
    min.display();

    number mul = *num;
    mul.display();
}
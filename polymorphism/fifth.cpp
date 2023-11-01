/*
    Write a complete program to illustrate the use of this pointer 
*/
#include<iostream>
using namespace std;

class A{
    public:

    int x;
    void set(int v){
        this->x=v;
    }

    void display(){
        cout<<"The value of x is - "<<x<<endl;
    }
};

int main(){
    A a;
    a.set(10);
    a.display();

    a.set(5);
    a.display();
}
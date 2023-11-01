/*
    Program to Implement Hybrid Inheritance...
*/

#include<iostream>
using namespace std;

class A{
    public:

    virtual void display(){
        cout<<"A is invoked"<<endl;
    }
};

class B:virtual public A{
    public:

    void display(){
        cout<<"B is invoked"<<endl;
    }
};

class C:virtual public A{
    public:

    virtual void display(){
        cout<<"C is invoked"<<endl;
    }
};

class D:virtual public B,virtual public C{
    public:
    
    void display(){
        cout<<"D is invoked"<<endl;
    }

}; 

int main(){
    D d;

    d.display();
    d.A::display();
    d.B::display();
    d.C::display();

}
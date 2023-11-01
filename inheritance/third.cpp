/*
    Student class have two derived class named as Test, Sports and both Test, Sports has a derived
    class named as Result which display all the details.

*/
#include<iostream>
using namespace std;

class Student{
    public:

    char name[25];

    virtual void get(){
        cout<<"Enter the name of student - ";
        cin>>name;
    }
    virtual void display(){
        cout<<"Name of student is - "<<name<<endl;
    }
};

class Test:virtual public Student{
    public:
    int mark;

    void get(){
        cout<<"Enter the marks of test - ";
        cin>>mark;
    }
    void display(){
        cout<<"The marks of the test is - "<<mark<<endl;
    }
};

class Sports:virtual public Student{
    public:
    int score;

    void get(){
        cout<<"Enter the Score - ";
        cin>>score;
    }

    void display(){
        cout<<"The Score of the match is - "<<score<<endl;
    }
};

int main(){
    Sports s;
    Test t;

    t.get();
    t.Student::get();
    s.get();

    t.display();
    t.Student::display();
    s.display();
}
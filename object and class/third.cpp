/*
    Define Class named point which represents 2-D Point, i.e P(x, y). Define Default Constructor to
initialize both data member value 5. Define Necessary Function and Write a program to test class
Point. 
*/
#include<iostream>
using namespace std;

class P{
    public:
    int a,b;

    P(int x=5,int y=5){
        a=x;
        b=y;
    }

    void display(){
        cout<<"The value of a is - "<<a<<endl;
        cout<<"The value of a is - "<<b<<endl;
    }

};

int main(){
    P p(2,4);
    p.display();
}



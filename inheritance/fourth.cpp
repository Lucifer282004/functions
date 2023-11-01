/*
    . Assume that circle is defined using radius and cylinder is defined using
radius and height. Write a circle class as base class and inherit the cylinder class from it. Develop
classes such that user can compute the area of circle objects and volume of cylinder objects. Area
of circle is radius*radius, while volume of cylinder is pie*(radius)2*height.
*/

#include<iostream>
using namespace std;

class Circle{
    public:
    float radius;

    virtual void get(){
        cout<<"Enter the radius :- ";
        cin>>radius;

    }

    virtual void display(){
        cout<<"The Area of circle is - "<< radius* radius<<endl;
    }
};

class Cylender:public Circle{
    public:
    float height;

    void get(){
        cout<<"Enter the radius :- ";
        cin>>radius;

        cout<<"Enter the height :- ";
        cin>>height;
    }

    void display(){
        cout<<"Area of cylender is - "<<3.14 * radius * radius * height;
    }
};

int main(){
    Circle C;
    Cylender c;

    C.get();
    C.display();

    c.get();
    c.display();
}
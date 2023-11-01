/*
Write a C++ program demonstrating use of the pure virtual 
function with the use of base and derived classes. 

*/


#include<iostream>
using namespace std;

class Shape {
public:
    virtual void Area() = 0;
};

class Circle : public Shape {
public:
    float r;

    Circle() {
        cout << "Enter the value of radius: ";
        cin >> r;
    }

    void Area()  {
        cout << "The area of circle is: " << 3.14 * r * r << endl;
    }
};

class Square : public Shape {
public:
    float side;

    Square() {
        cout << "Enter the value of side: ";
        cin >> side;
    }

    void Area()  {
        cout << "Area of square is: " << side * side << endl;
    }
};

int main() {
    Circle c;
    Square s;

    Shape* s1 = &c; 
    Shape* s2 = &s; 

    s1->Area(); 
    s2->Area(); 

    return 0;
}

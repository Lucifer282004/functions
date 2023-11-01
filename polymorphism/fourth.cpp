/*
    Declare a class called logic_gate to represent logic gates. The class has three data members - input1,
input2 and input3 to represent three inputs to the logic gate. The class also has a virtual function
member called get_gate_output. Derive two classes from the base class logic_gate, namely,
and_gate and or_gate to represent ‘logical and gate’ and ‘logical or gate’ respectively. Define
function get_gate_output in both of these classes to get the output of the gate. Show use of above
classes and functions to demonstrate dynamic polymorphism in function main.


*/
#include<iostream>
using namespace std;

class logic_gate{
    public:

    int I1,I2,I3;
    void get(int i1,int i2,int i3){
        I1=i1;
        I2=i2;
        I3=i3;
    }

    virtual void display(){}
};

class AND: public logic_gate{
    public:

    void display(){
        cout<<I1 && I2 && I3;
        cout<<endl;
    }

};

class OR: public logic_gate{
    public:

    void display(){
        cout<<I1 || I2 || I3;
        cout<<endl;
    }
};

int main(){
    AND a;
    OR o;

    a.get(1,1,0);
    a.display();
    o.get(1,1,0);
    o.display();
}


/*
    Assume that vehicle class is defined as base class with price and year of manufacturing. Derive
two classes namely bus and truck from base class with bus with seating capacity and truck with
loading capacity. Develop classes with necessary member functions to get and put data.
Demonstrate its use in main ().

*/
#include<iostream>
using namespace std;

class vehicle {
    public:

    int price, year;
    virtual void get(){

        cout<<"Enter the Price of vehicle :- ";
        cin>>price;

        cout<<"Enter the year :- ";
        cin>>year; 
    }

    virtual void display(){
        cout<<"The price of vehicle is :- "<<price<<endl;
        cout<<"The year of manufacturing :- "<<year<<endl;

    }
};
class bus:public vehicle{
    public:
    int seat;
    void get(){
        cout<<"Enter the seating capacity :- ";
        cin>>seat;
    }

    void display(){
        cout<<"The seating capacity is - "<<seat<<endl;;
    }

};
class truck:public vehicle{
    public:

    int load;
    void get(){
        cout<<"Enter the loading capacity :- ";
        cin>>load;
    } 

    void display(){
        cout<<"The loading capacity is - "<<load<<endl;;
    }

};
int main(){

    vehicle v;
    bus b;
    truck t;

    v.get();
    
    b.get();
    t.get();

    v.display();
    b.display();
    t.display();

}
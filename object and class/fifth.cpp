/*
    Write a program which include class to represent a vector(a serious of float values). Include
    member functions to perform the following tasks:
     a> To create the vector
     b> To modify the value of given elements
     c> To Display the given vector in the form(10,20,30)  
*/

#include<iostream>
using namespace std;

class float{
    public:
    vector<float>values;

        int size;
    void createvector(){

        cout<<"Enter the vector :- ";
        cin>>size;

        for(int i=0;i<size;i++){
            cin>>values[i];
        }
    }

    void mofify(){
        int i;
        float val;

        cout<<"Enter the index :- ";
        cin>>i;

        for(i>0){
            cout<<"Enter the value - ";
            cin>>val;

            values[i]=val;
        }
    }

    void display(){
        for(int i=0;i<size;i++){
            
        }
    }
};

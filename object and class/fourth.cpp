/*
    Create a class Account. It has three data member account id, name and balance. Define function to
    assign value and display value. Define function that search account number given by the user. If
    account number exists, print detail of that account. Write a program using array of object. Declare
    at least 5 account and print details. 
*/

#include<iostream>
#include<string.h>
using namespace std;

class Account{
    public:
    int id,balance;
    char name[25];

    
    
    void get(int i, int b,  const char n[25]) {
        id=i;
        balance=b;
        strcpy(name, n);
    }

    void display(){
        cout<<"Inserted data :- "<<endl;

        cout<<"ID:- "<<id<<endl<<"Balance:- "<<balance <<endl<<"Name :- "<<name<<endl<<endl;
    }


    bool search(int n){
        if (n==id){
            return true;
        }else{
            return false;
        }
    }
};



int main(){
    Account A[2];

    A[0].get(101,100000,"Shreyansh");
    A[1].get(102,10000,"Sonu");

    A[0].display();
    A[1].display();
    int n;

    cout<<"Enter the account yu want to search :- ";
    cin>>n;

    for(int i=0;i<2;i++){
        if (A[i].search(n) == true){
            cout<<"AC found";
        }
    }
}

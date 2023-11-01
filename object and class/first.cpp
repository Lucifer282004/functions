/*
    Define a class to represent a string with operations string length, compare and reverse. Show its
    use by writing main()
*/

#include<iostream>
#include<string.h>
#include<cctype>

using namespace std;

class sg{
    public:
    char name[25];

    sg(){
        cout<<"Enter the string ";
        cin>>name;
    }

    void length(){
        cout<<"The length of string is :- "<<strlen(name)<<endl;
    }

    void reverse(){
        cout<<"The reverse of strin is :- "<<strrev(name)<<endl;
    }

    void comp(){
        char name2[25];
        int result=strcmp(name,name2);
        cout<<result<<endl;

    }

    void result(){
        length();
        comp();
        reverse();
    }
};

int main(){
    sg s;
    s.result();
}


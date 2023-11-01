/*
    Write a C++ program that creates inventory of items by storing item_code, item name and qty.
    Access the data using pointers. 
*/

#include<iostream>
#include<string.h>
#include<cstring>

using namespace std;
class store{
    public:

    int code,qty;
    char name[25];

    store(int c, int q, char n[25]){
        code=c;
        qty=q;
        strcpy(name,n);
    }

    void display(){
        cout<<"The Item code - "<<code<<endl;
        cout<<"The quantity - "<<qty<<endl;
        cout<<"The name of product is - "<<name<<endl;
    }
};

int main(){
    store s1(007,50,"colgate");
    store s2(010,50,"brush");

    store *s=&s1;
    s->display();
    s=&s2;
    s->display();


}
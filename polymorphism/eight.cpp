/*
    Create a class ITEM with item_code, item_rate and quantity as a data member. Create an array of
pointers to objects of class ITEM. Write a member function which will calculate the amount of
item. Print item_code and amount of item.
*/

#include<iostream>
using namespace std;

class ITEM{
    public:

    int I_code,I_rate,qty;

    ITEM(int c,int r, int q) : I_code(c), I_rate(r), qty(q){}

    int calculate(){
        return  I_rate * qty;
    }

    void display(){
        cout<<"Item code "<<I_code<<endl;
        cout<<"Item rate "<<I_rate<<endl;
        cout<<"Item quentity "<<qty<<endl<<endl;
    }

};

int main(){
    ITEM* i[3];

    i[0]=new ITEM(101,1000,50);
    i[1]=new ITEM(102,100,10);
    i[2]=new ITEM(103,2000,40);

    for(int j=0;j<3;j++){
        i[j]->display();
    }
}
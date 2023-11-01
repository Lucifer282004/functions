#include<iostream>
using namespace std;


void fun(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;

    cout<<"The value of a is - "<<a;
    cout<<"The value of b is - "<<b;
}
int main(){
    int a,b;

    cout<<"Enter the value of a -";
    cin>>a;
    cout<<"Enter the value of b -";
    cin>>b;

    fun(a,b);
}
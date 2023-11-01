#include<iostream>
using namespace std;

void fun (int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    cout<<"A is - "<<a<<endl<<"B is - "<<b<<endl;
}

int main(){
    int a=1,b=2;

    fun(a,b);
}
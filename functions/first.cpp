#include<iostream>
using namespace std;

int fun(int n){
    if (n==0 || n==1){
        return 1;
    }else{
        return n * fun(n-1);
    }
}

int main(){
    int n;
    cout<<"Enter the number whose factorial you want :- ";
    cin>>n;

   cout<< fun(n);
}
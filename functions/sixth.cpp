#include<iostream>
using namespace std;

void fun(){
    int sum=0,n;
    cout<<"Enter the number - ";
    
    for(int i=0;i<5;i++){
        cin>>n;
        sum+=n;
    }
    cout<<"Sum is - "<<sum<<endl;
    cout<<"AVg is _ "<<sum/5<<endl;
}
int main(){
    fun();
}
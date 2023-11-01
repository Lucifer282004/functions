#include<iostream>
#include<math.h>

using namespace std;

void fun(double m,int n=2){
    cout<<pow(m,n);
    cout<<n<<"Pow value"<<endl<<m<<"Value"<<endl;
}
int main(){
    int a;
    double m;

    // cin>>a;
    cin>>m;

    fun(m);
}
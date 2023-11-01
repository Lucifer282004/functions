#include<iostream>
using namespace std;

void fun(int n);

int main() {
    int n;

    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    fun(n);
    return 0;
}

void fun(int n){
    int f=0,b=1,a;
    
    for (int i = 0; i < n; ++i) {
        if (i <= 1) {
            a = i;
        } else {
            a = f + b;
            f = b;
            b = a;
        }
        cout << a << " ";
    }

    cout << endl;
}
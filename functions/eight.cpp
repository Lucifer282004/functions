#include<iostream>
using namespace std;

int& findLarger(int &a, int &b) {
    if(a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1 = 10, num2 = 5;
    cout << "Before comparison: num1 = " << num1 << ", num2 = " << num2 << endl;
    
    int &larger = findLarger(num1, num2); // Return by reference
    
    larger = 20; // Modify the larger number
    
    cout << "After modification: num1 = " << num1 << ", num2 = " << num2 << endl;
    return 0;
}

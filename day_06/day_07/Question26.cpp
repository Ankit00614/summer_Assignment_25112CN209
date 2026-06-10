#include <iostream>
using namespace std;

int recursiveFibonacci(int n) {
    if (n <= 1) return n; // Base cases: F(0)=0, F(1)=1
    return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the term number (n): ";
    cin >> n;
    cout << "The " << n << "th Fibonacci term is: " << recursiveFibonacci(n) << endl;
    return 0;
}
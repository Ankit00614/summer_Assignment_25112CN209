#include <iostream>
using namespace std;

long long recursiveFactorial(int n) {
    if (n <= 1) return 1; // Base case
    return n * recursiveFactorial(n - 1); // Recursive case
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    if (num < 0) cout << "Factorial doesn't exist for negative numbers." << endl;
    else cout << "Factorial of " << num << " = " << recursiveFactorial(num) << endl;
    return 0;
}
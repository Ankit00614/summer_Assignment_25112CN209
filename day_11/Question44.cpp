#include <iostream>
using namespace std;

long long getFactorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; ++i) fact *= i;
    return fact;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0) cout << "Invalid Input." << endl;
    else cout << "Factorial: " << getFactorial(num) << endl;
    return 0;
}
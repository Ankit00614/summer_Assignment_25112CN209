#include <iostream>
using namespace std;

int recursiveSumOfDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + recursiveSumOfDigits(n / 10);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int temp = (num < 0) ? -num : num;
    cout << "Sum of digits: " << recursiveSumOfDigits(temp) << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    long long binaryNum;
    int decimalNum = 0, base = 1, remainder;
    
    cout << "Enter a binary number: ";
    cin >> binaryNum;
    
    long long temp = binaryNum;
    while (temp > 0) {
        remainder = temp % 10;
        decimalNum += remainder * base;
        temp /= 10;
        base *= 2;
    }
    
    cout << "Binary " << binaryNum << " in decimal is: " << decimalNum << endl;
    return 0;
}
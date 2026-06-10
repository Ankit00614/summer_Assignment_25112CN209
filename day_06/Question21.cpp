#include <iostream>
using namespace std;

int main() {
    int decimalNum;
    long long binaryNum = 0;
    int remainder, i = 1;
    
    cout << "Enter a decimal number: ";
    cin >> decimalNum;
    
    int temp = decimalNum;
    while (temp != 0) {
        remainder = temp % 2;
        binaryNum += remainder * i;
        temp /= 2;
        i *= 10;
    }
    
    cout << "Decimal " << decimalNum << " in binary is: " << binaryNum << endl;
    return 0;
}
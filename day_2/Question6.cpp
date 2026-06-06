#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    
    int reversedNum = 0, remainder;
    int temp = num;
    
    while (temp != 0) {
        remainder = temp % 10;
        reversedNum = reversedNum * 10 + remainder;
        temp /= 10;
    }
    
    cout << "Reversed Number: " << reversedNum << endl;
    return 0;
}
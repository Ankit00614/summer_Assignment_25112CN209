#include <iostream>
using namespace std;

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;
    
    long long temp = (num < 0) ? -num : num;
    int sum = 0;
    
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    
    cout << "Sum of digits: " << sum << endl;
    return 0;
}
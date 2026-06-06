#include <iostream>
using namespace std;

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;
    
    long long temp = (num < 0) ? -num : num;
    int product = (temp == 0) ? 0 : 1;
    
    while (temp > 0) {
        product *= (temp % 10);
        temp /= 10;
    }
    
    cout << "Product of digits: " << product << endl;
    return 0;
}
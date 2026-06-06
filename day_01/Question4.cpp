#include <iostream>
using namespace std;

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;
    
    int count = 0;
    long long temp = (num < 0) ? -num : num; // Handle negative numbers
    
    if (temp == 0) {
        count = 1;
    } else {
        while (temp > 0) {
            temp /= 10;
            count++;
        }
    }
    
    cout << "Number of digits: " << count << endl;
    return 0;
}

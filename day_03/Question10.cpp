#include <iostream>
using namespace std;

int main() {
    int low, high;
    cout << "Enter two numbers (intervals): ";
    cin >> low >> high;
    
    cout << "Prime numbers between " << low << " and " << high << " are: " << endl;
    
    while (low <= high) {
        if (low <= 1) {
            low++;
            continue;
        }
        
        bool isPrime = true;
        for (int i = 2; i * i <= low; ++i) {
            if (low % i == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) {
            cout << low << " ";
        }
        low++;
    }
    cout << endl;
    return 0;
}
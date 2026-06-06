#include <iostream>
using namespace std;

int main() {
    int num, originalNum, remainder, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    
    originalNum = num;
    
    while (num > 0) {
        remainder = num % 10;
        
        // Find factorial of remainder
        int fact = 1;
        for (int i = 1; i <= remainder; i++) {
            fact *= i;
        }
        
        sum += fact;
        num /= 10;
    }
    
    if (sum == originalNum)
        cout << originalNum << " is a strong number." << endl;
    else
        cout << originalNum << " is not a strong number." << endl;
        
    return 0;
}
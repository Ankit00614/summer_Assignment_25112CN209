#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int low, high;
    cout << "Enter lower and upper bounds of the range: ";
    cin >> low >> high;
    
    cout << "Armstrong numbers between " << low << " and " << high << " are: " << endl;
    
    for (int i = low; i <= high; ++i) {
        int temp = i;
        int n = 0;
        
        // Count number of digits
        while (temp != 0) {
            temp /= 10;
            n++;
        }
        
        temp = i;
        double sum = 0;
        while (temp != 0) {
            int remainder = temp % 10;
            sum += pow(remainder, n);
            temp /= 10;
        }
        
        if ((int)sum == i) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
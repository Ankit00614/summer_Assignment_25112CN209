#include <iostream>
using namespace std;

int main() {
    double base;
    int exponent;
    cout << "Enter base and exponent respectively: ";
    cin >> base >> exponent;
    
    double result = 1.0;
    int exp = (exponent < 0) ? -exponent : exponent;
    
    // Exponentiation by squaring (Binary Exponentiation) for O(log n) efficiency
    while (exp > 0) {
        if (exp % 2 == 1) {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }
    
    // If the original exponent was negative, invert the final result
    if (exponent < 0) {
        result = 1.0 / result;
    }
    
    cout << "Result: " << result << endl;
    return 0;
}
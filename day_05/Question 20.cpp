#include <iostream>
using namespace std;

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;
    
    long long maxPrime = -1;
    
    // Divide by 2 to get rid of even factors
    while (num % 2 == 0) {
        maxPrime = 2;
        num /= 2;
    }
    
    // Check odd numbers up to sqrt(num)
    for (long long i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            maxPrime = i;
            num /= i;
        }
    }
    
    // If num is still greater than 2, it is prime itself
    if (num > 2) {
        maxPrime = num;
    }
    
    cout << "Largest prime factor is: " << maxPrime << endl;
    return 0;
}
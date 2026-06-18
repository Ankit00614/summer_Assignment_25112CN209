#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int original = n, temp = n, digits = 0, sum = 0;
    while (temp > 0) { digits++; temp /= 10; }
    temp = n;
    while (temp > 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return original == sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isArmstrong(num)) cout << "It's an Armstrong number." << endl;
    else cout << "It's not an Armstrong number." << endl;
    return 0;
}
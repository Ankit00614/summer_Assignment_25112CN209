#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return original == reversed;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if (isPalindrome(num)) cout << "It's a palindrome." << endl;
    else cout << "It's not a palindrome." << endl;
    return 0;
}
#include <iostream>
using namespace std;

int recursiveReverse(int n, int rev = 0) {
    if (n == 0) return rev;
    return recursiveReverse(n / 10, rev * 10 + n % 10);
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    int result = recursiveReverse(num);
    cout << "Reversed Number: " << result << endl;
    return 0;
}
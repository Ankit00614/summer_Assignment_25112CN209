#include <iostream>
using namespace std;

int findMaximum(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Maximum value: " << findMaximum(x, y) << endl;
    return 0;
}
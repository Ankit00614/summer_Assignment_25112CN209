#include <iostream>
using namespace std;

int findSum(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Sum: " << findSum(x, y) << endl;
    return 0;
}
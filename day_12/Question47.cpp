#include <iostream>
using namespace std;

void printFibonacciUpTo(int terms) {
    int t1 = 0, t2 = 1, next;
    for (int i = 1; i <= terms; ++i) {
        cout << t1 << " ";
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    cout << endl;
}

int main() {
    int terms;
    cout << "Enter number of terms: ";
    cin >> terms;
    printFibonacciUpTo(terms);
    return 0;
}
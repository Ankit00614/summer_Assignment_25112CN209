#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the term number (n): ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Please enter a position greater than 0." << endl;
        return 0;
    }
    
    int t1 = 0, t2 = 1, nextTerm = 0;
    
    if (n == 1) nextTerm = t1;
    else if (n == 2) nextTerm = t2;
    else {
        for (int i = 3; i <= n; ++i) {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
    }
    
    cout << "The " << n << "th Fibonacci term is: " << nextTerm << endl;
    return 0;
}
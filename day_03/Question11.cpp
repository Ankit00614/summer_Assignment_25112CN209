#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter two integers: ";
    cin >> n1 >> n2;
    
    // Handle negative numbers
    n1 = (n1 < 0) ? -n1 : n1;
    n2 = (n2 < 0) ? -n2 : n2;
    
    while(n1 != n2) {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    
    cout << "GCD is: " << n1 << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n, evens = 0, odds = 0;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) evens++;
        else odds++;
    }
    cout << "Even items count: " << evens << "\nOdd items count: " << odds << endl;
    return 0;
}
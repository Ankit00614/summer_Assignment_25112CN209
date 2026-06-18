#include <iostream>
using namespace std;

int main() {
    int n; // Size of array (should contain numbers from 1 to n+1)
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    
    cout << "Enter " << n << " elements (ranging from 1 to " << n + 1 << "): " << endl;
    for (int i = 0; i < n; ++i) cin >> arr[i];
    
    // Total sum expected for numbers 1 to n+1
    int expectedTotal = ((n + 1) * (n + 2)) / 2;
    int actualSum = 0;
    for (int i = 0; i < n; ++i) {
        actualSum += arr[i];
    }
    
    cout << "Missing number is: " << expectedTotal - actualSum << endl;
    return 0;
}
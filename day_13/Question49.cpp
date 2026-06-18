#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter elements count: ";
    cin >> n;
    int arr[n];
    
    cout << "Enter " << n << " values: " << endl;
    for (int i = 0; i < n; ++i) cin >> arr[i];
    
    cout << "Array tracking display: ";
    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
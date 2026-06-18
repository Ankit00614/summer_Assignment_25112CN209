#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Enter size and rotation parameter steps (k): ";
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];
    
    k = k % n; // Adjust step window boundary overflow variables
    
    int temp[k];
    for (int i = 0; i < k; ++i) temp[i] = arr[i];
    for (int i = k; i < n; ++i) arr[i - k] = arr[i];
    for (int i = 0; i < k; ++i) arr[n - k + i] = temp[i];
    
    cout << "Left Rotated layout outcome sequence: ";
    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
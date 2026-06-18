#include <iostream>
using namespace std;

int main() {
    int n, target;
    cout << "Enter size of sorted array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n; ++i) cin >> arr[i];
    
    cout << "Enter target element to find: ";
    cin >> target;
    
    int low = 0, high = n - 1, resIdx = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            resIdx = mid;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    if (resIdx != -1) cout << "Element found at index: " << resIdx << endl;
    else cout << "Element not found in array." << endl;
    return 0;
}
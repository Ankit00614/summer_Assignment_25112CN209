#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter sizes of two arrays: ";
    cin >> n1 >> n2;
    int arr1[n1], arr2[n2], unionArr[n1 + n2], uSize = 0;
    
    cout << "Enter first array elements: ";
    for (int i = 0; i < n1; ++i) cin >> arr1[i];
    cout << "Enter second array elements: ";
    for (int i = 0; i < n2; ++i) cin >> arr2[i];
    
    // Add all elements from arr1
    for (int i = 0; i < n1; ++i) unionArr[uSize++] = arr1[i];
    
    // Add elements from arr2 if they aren't already present
    for (int i = 0; i < n2; ++i) {
        bool found = false;
        for (int j = 0; j < uSize; ++j) {
            if (arr2[i] == unionArr[j]) {
                found = true;
                break;
            }
        }
        if (!found) unionArr[uSize++] = arr2[i];
    }
    
    cout << "Union of arrays: ";
    for (int i = 0; i < uSize; ++i) cout << unionArr[i] << " ";
    cout << endl;
    return 0;
}
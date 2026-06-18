#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];
    
    cout << "Duplicate items identified: ";
    bool foundDuplicate = false;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] == arr[j]) {
                // Check if we already displayed it to avoid repeating print statements
                bool alreadyPrinted = false;
                for (int k = 0; k < i; ++k) {
                    if (arr[k] == arr[i]) alreadyPrinted = true;
                }
                if (!alreadyPrinted) {
                    cout << arr[i] << " ";
                    foundDuplicate = true;
                }
                break;
            }
        }
    }
    if (!foundDuplicate) cout << "None";
    cout << endl;
    return 0;
}
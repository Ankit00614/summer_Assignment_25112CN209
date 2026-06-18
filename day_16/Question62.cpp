#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];
    
    int maxElement = arr[0], maxCount = 0;
    
    for (int i = 0; i < n; ++i) {
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if (arr[i] == arr[j]) count++;
        }
        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }
    
    cout << "Element with max frequency: " << maxElement << " (Occurs " << maxCount << " times)" << endl;
    return 0;
}

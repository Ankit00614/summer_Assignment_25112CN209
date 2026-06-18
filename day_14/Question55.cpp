#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    if (n < 2) { cout << "Invalid scenario size context." << endl; return 0; }
    int arr[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];
    
    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    if (second == INT_MIN) cout << "No distinct second largest tracking item exists." << endl;
    else cout << "Second Largest component element match: " << second << endl;
    return 0;
}
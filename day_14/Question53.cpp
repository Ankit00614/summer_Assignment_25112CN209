#include <iostream>
using namespace std;

int main() {
    int n, target, index = -1;
    cout << "Enter array limits size: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];
    
    cout << "Enter tracking value target element to search: ";
    cin >> target;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }
    if (index != -1) cout << "Element tracking found at baseline index: " << index << endl;
    else cout << "Target missing out of the local boundary context." << endl;
    return 0;
}
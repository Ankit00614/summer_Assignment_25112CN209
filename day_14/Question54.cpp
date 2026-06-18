#include <iostream>
using namespace std;

int main() {
    int n, target, frequency = 0;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];
    
    cout << "Enter variable to trace frequency: ";
    cin >> target;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) frequency++;
    }
    cout << "Element occurred " << frequency << " times." << endl;
    return 0;
}
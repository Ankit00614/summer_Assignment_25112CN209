#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    double sum = 0;
    
    cout << "Enter elements: " << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum: " << sum << endl;
    cout << "Average: " << sum / n << endl;
    return 0;
}
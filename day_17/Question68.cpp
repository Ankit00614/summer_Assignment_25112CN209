#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter sizes of two arrays: ";
    cin >> n1 >> n2;
    int arr1[n1], arr2[n2];
    
    cout << "Enter first array: ";
    for (int i = 0; i < n1; ++i) cin >> arr1[i];
    cout << "Enter second array: ";
    for (int i = 0; i < n2; ++i) cin >> arr2[i];
    
    cout << "Intersection of arrays: ";
    for (int i = 0; i < n1; ++i) {
        for (int j = 0; j < n2; ++j) {
            if (arr1[i] == arr2[j]) {
                // To avoid duplicate printing in intersection output
                bool alreadyPrinted = false;
                for (int k = 0; k < i; ++k) {
                    if (arr1[k] == arr1[i]) alreadyPrinted = true;
                }
                if (!alreadyPrinted) cout << arr1[i] << " ";
                break;
            }
        }
    }
    cout << endl;
    return 0;
}
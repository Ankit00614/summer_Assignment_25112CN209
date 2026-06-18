#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter size of first and second array: ";
    cin >> n1 >> n2;
    int arr1[n1], arr2[n2], merged[n1 + n2];
    
    cout << "Enter elements for first array: ";
    for (int i = 0; i < n1; ++i) cin >> arr1[i];
    
    cout << "Enter elements for second array: ";
    for (int i = 0; i < n2; ++i) cin >> arr2[i];
    
    for (int i = 0; i < n1; ++i) merged[i] = arr1[i];
    for (int i = 0; i < n2; ++i) merged[n1 + i] = arr2[i];
    
    cout << "Merged array: ";
    for (int i = 0; i < n1 + n2; ++i) cout << merged[i] << " ";
    cout << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;
    int matrix[n][n];
    
    cout << "Enter elements:" << endl;
    for(int i=0; i<n; ++i) for(int j=0; j<n; ++j) cin >> matrix[i][j];
    
    bool isSymmetric = true;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = false;
                break;
            }
        }
    }
    
    if (isSymmetric) cout << "The matrix is symmetric." << endl;
    else cout << "The matrix is not symmetric." << endl;
    return 0;
}
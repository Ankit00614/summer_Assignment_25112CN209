#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix (N x N): ";
    cin >> n;
    int matrix[n][n];
    
    cout << "Enter elements: " << endl;
    for(int i=0; i<n; ++i)
        for(int j=0; j<n; ++j) cin >> matrix[i][j];
        
    int principalDiag = 0, secondaryDiag = 0;
    for (int i = 0; i < n; ++i) {
        principalDiag += matrix[i][i];
        secondaryDiag += matrix[i][n - i - 1];
    }
    
    cout << "Principal Diagonal Sum: " << principalDiag << endl;
    cout << "Secondary Diagonal Sum: " << secondaryDiag << endl;
    return 0;
}
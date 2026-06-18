#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cout << "Enter rows and columns for Matrix 1: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for Matrix 2: ";
    cin >> r2 >> c2;
    
    if (c1 != r2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }
    
    int A[r1][c1], B[r2][c2], prod[r1][c2];
    
    cout << "Enter Matrix 1 elements:" << endl;
    for(int i=0; i<r1; ++i) for(int j=0; j<c1; ++j) cin >> A[i][j];
    cout << "Enter Matrix 2 elements:" << endl;
    for(int i=0; i<r2; ++i) for(int j=0; j<c2; ++j) cin >> B[i][j];
    
    // Initializing production matrix elements to 0
    for(int i=0; i<r1; ++i) for(int j=0; j<c2; ++j) prod[i][j] = 0;
    
    // Multiplying matrices
    for(int i=0; i<r1; ++i) {
        for(int j=0; j<c2; ++j) {
            for(int k=0; k<c1; ++k) {
                prod[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    cout << "Product Matrix Result:" << endl;
    for(int i=0; i<r1; ++i) {
        for(int j=0; j<c2; ++j) cout << prod[i][j] << " ";
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;
    int A[r][c], B[r][c], diff[r][c];
    
    cout << "Enter matrix A: " << endl;
    for(int i=0; i<r; ++i) for(int j=0; j<c; ++j) cin >> A[i][j];
    cout << "Enter matrix B: " << endl;
    for(int i=0; i<r; ++i) for(int j=0; j<c; ++j) cin >> B[i][j];
        
    cout << "Resultant Difference Matrix:" << endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            diff[i][j] = A[i][j] - B[i][j];
            cout << diff[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
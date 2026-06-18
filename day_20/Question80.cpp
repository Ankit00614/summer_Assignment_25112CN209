#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;
    int matrix[r][c];
    
    cout << "Enter elements:" << endl;
    for(int i=0; i<r; ++i) for(int j=0; j<c; ++j) cin >> matrix[i][j];
    
    for (int j = 0; j < c; ++j) {
        int colSum = 0;
        for (int i = 0; i < r; ++i) {
            colSum += matrix[i][j];
        }
        cout << "Sum of Column " << j + 1 << " = " << colSum << endl;
    }
    return 0;
}
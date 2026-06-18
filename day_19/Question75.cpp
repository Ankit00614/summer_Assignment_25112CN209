#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter matrix rows and columns: ";
    cin >> r >> c;
    int matrix[r][c];
    
    cout << "Enter elements: " << endl;
    for(int i=0; i<r; ++i)
        for(int j=0; j<c; ++j) cin >> matrix[i][j];
        
    cout << "Transposed Matrix:" << endl;
    for (int i = 0; i < c; ++i) {
        for (int j = 0; j < r; ++j) {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
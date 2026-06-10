#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; ++i) {
        // Spaces
        for (int space = 1; space <= rows - i; ++space) {
            cout << " ";
        }
        // Increasing sequence
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }
        // Decreasing sequence
        for (int j = i - 1; j >= 1; --j) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
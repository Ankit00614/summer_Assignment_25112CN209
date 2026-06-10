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
        char ch = 'A';
        for (int j = 1; j <= i; ++j) {
            cout << ch++;
        }
        // Decreasing sequence
        ch -= 2;
        for (int j = i - 1; j >= 1; --j) {
            cout << ch--;
        }
        cout << endl;
    }
    return 0;
}

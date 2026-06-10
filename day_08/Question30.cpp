#include <iostream>
using namespace std;

int main() {
    int rows = 5; // As per the assignment layout: 1 to 12345
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
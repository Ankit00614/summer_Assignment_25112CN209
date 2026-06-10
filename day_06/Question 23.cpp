#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    
    int count = 0;
    int temp = num;
    
    // Kernighan’s Algorithm (clears the lowest set bit at each step)
    while (temp > 0) {
        temp = temp & (temp - 1);
        count++;
    }
    
    cout << "Number of set bits (1s) in binary format: " << count << endl;
    return 0;
}
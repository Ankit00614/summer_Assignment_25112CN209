#include <iostream>
using namespace std;

int main() {
    int n1, n2, max;
    cout << "Enter two integers: ";
    cin >> n1 >> n2;
    
    // Maximum value between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;
    
    while (true) {
        if (max % n1 == 0 && max % n2 == 0) {
            cout << "LCM is: " << max << endl;
            break;
        }
        max++;
    }
    return 0;
}

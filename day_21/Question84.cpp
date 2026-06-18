#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a lowercase string: ";
    getline(cin, str);
    
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            // ASCII manipulation ('a' is 97, 'A' is 65. Difference is 32)
            str[i] = str[i] - 32;
        }
    }
    
    cout << "Uppercase conversion output: " << str << endl;
    return 0;
}
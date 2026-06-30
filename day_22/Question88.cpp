#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, result = "";

    cout << "Enter a string: ";
    getline(cin, str);

    for (char c : str) {
        if (c != ' ')
            result += c;
    }

    cout << "String without spaces: " << result;

    return 0;
}
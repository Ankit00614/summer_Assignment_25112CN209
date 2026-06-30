#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, result = "";
    cout << "Enter string: ";
    getline(cin, str);

    for (char c : str) {
        if (result.find(c) == string::npos)
            result += c;
    }

    cout << "After removing duplicates: " << result;
    return 0;
}
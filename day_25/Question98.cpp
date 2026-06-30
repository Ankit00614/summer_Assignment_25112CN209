#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;

    getline(cin, s1);
    getline(cin, s2);

    cout << "Common characters: ";

    for(char c='a'; c<='z'; c++) {
        if(s1.find(c)!=string::npos &&
           s2.find(c)!=string::npos)
            cout << c << " ";
    }

    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    string names[100];

    cin.ignore();

    for(int i=0;i<n;i++)
        getline(cin,names[i]);

    sort(names,names+n);

    for(int i=0;i<n;i++)
        cout << names[i] << endl;

    return 0;
}
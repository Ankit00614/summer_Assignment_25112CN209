#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a,string b){
    return a.length() < b.length();
}

int main(){
    int n;
    cin>>n;

    vector<string> words(n);

    for(int i=0;i<n;i++)
        cin>>words[i];

    sort(words.begin(),words.end(),compare);

    for(string w:words)
        cout<<w<<" ";

    return 0;
}
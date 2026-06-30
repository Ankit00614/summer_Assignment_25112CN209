#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    cout<<"Length = "<<str.length()<<endl;

    for(int i=str.length()-1;i>=0;i--)
        cout<<str[i];

    return 0;
}
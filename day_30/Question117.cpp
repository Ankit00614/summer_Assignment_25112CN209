#include <iostream>
using namespace std;

int main(){
    string name[50];
    int marks[50];
    int n;

    cin>>n;
    cin.ignore();

    for(int i=0;i<n;i++){
        getline(cin,name[i]);
        cin>>marks[i];
        cin.ignore();
    }

    for(int i=0;i<n;i++)
        cout<<name[i]<<" "<<marks[i]<<endl;

    return 0;
}
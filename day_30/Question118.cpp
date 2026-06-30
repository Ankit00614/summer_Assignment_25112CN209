#include <iostream>
using namespace std;

struct Book{
    int id;
    string name;
};

int main(){
    Book b[20];
    int n;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>b[i].id;
        cin>>b[i].name;
    }

    for(int i=0;i<n;i++)
        cout<<b[i].id<<" "<<b[i].name<<endl;

    return 0;
}
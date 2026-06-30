#include <iostream>
using namespace std;

struct Employee{
    int id;
    string name;
};

int main(){
    Employee e[20];
    int n;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>e[i].id;
        cin>>e[i].name;
    }

    for(int i=0;i<n;i++)
        cout<<e[i].id<<" "<<e[i].name<<endl;

    return 0;
}
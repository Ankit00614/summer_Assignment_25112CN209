#include <iostream>
using namespace std;

struct Item{
    int id;
    string name;
    int qty;
};

int main(){
    Item item[100];
    int n=0;

    cout<<"Number of Items: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>item[i].id;
        cin>>item[i].name;
        cin>>item[i].qty;
    }

    for(int i=0;i<n;i++)
        cout<<item[i].id<<" "<<item[i].name<<" "<<item[i].qty<<endl;

    return 0;
}
#include <iostream>
using namespace std;

struct Contact{
    string name;
    string phone;
};

int main(){
    Contact c[100];
    int n=0,choice;

    do{
        cout<<"\n1.Add Contact\n2.Display Contacts\n3.Exit\n";
        cin>>choice;
        cin.ignore();

        if(choice==1){
            getline(cin,c[n].name);
            getline(cin,c[n].phone);
            n++;
        }
        else if(choice==2){
            for(int i=0;i<n;i++)
                cout<<c[i].name<<" - "<<c[i].phone<<endl;
        }

    }while(choice!=3);

    return 0;
}
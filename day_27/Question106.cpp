#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    double salary;
};

int main() {
    Employee emp[100];
    int n=0,choice;

    do{
        cout<<"\n1.Add\n2.Display\n3.Exit\n";
        cin>>choice;

        if(choice==1){
            cout<<"ID: ";
            cin>>emp[n].id;
            cin.ignore();

            cout<<"Name: ";
            getline(cin,emp[n].name);

            cout<<"Salary: ";
            cin>>emp[n].salary;
            n++;
        }
        else if(choice==2){
            for(int i=0;i<n;i++)
                cout<<emp[i].id<<" "<<emp[i].name<<" "<<emp[i].salary<<endl;
        }

    }while(choice!=3);

    return 0;
}
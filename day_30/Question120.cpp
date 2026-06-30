#include <iostream>
using namespace std;

void addStudent(string name[], int marks[], int &n){
    cout<<"Enter Name: ";
    cin.ignore();
    getline(cin,name[n]);

    cout<<"Enter Marks: ";
    cin>>marks[n];

    n++;
}

void displayStudent(string name[], int marks[], int n){
    cout<<"\nStudent Records\n";

    for(int i=0;i<n;i++)
        cout<<name[i]<<" "<<marks[i]<<endl;
}

int main(){
    string name[100];
    int marks[100];
    int n=0;
    int choice;

    do{
        cout<<"\n1.Add Student\n2.Display Students\n3.Exit\n";
        cin>>choice;

        switch(choice){
            case 1:
                addStudent(name,marks,n);
                break;

            case 2:
                displayStudent(name,marks,n);
                break;
        }

    }while(choice!=3);

    return 0;
}
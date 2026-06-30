#include <iostream>
using namespace std;

struct Book{
    int id;
    string title;
};

int main(){
    Book b[100];
    int n=0,choice;

    do{
        cout<<"\n1.Add Book\n2.Display Books\n3.Exit\n";
        cin>>choice;

        if(choice==1){
            cout<<"Book ID: ";
            cin>>b[n].id;
            cin.ignore();

            cout<<"Title: ";
            getline(cin,b[n].title);
            n++;
        }
        else if(choice==2){
            for(int i=0;i<n;i++)
                cout<<b[i].id<<" "<<b[i].title<<endl;
        }

    }while(choice!=3);

    return 0;
}
#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

int main() {
    Student s[100];
    int n = 0, choice;

    do {
        cout << "\n1.Add Student\n2.Display Students\n3.Search Student\n4.Exit\n";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Roll: ";
                cin >> s[n].roll;
                cin.ignore();
                cout << "Name: ";
                getline(cin, s[n].name);
                cout << "Marks: ";
                cin >> s[n].marks;
                n++;
                break;

            case 2:
                for(int i=0;i<n;i++)
                    cout << s[i].roll << " " << s[i].name << " " << s[i].marks << endl;
                break;

            case 3:
                int roll;
                cout << "Enter Roll: ";
                cin >> roll;

                for(int i=0;i<n;i++)
                    if(s[i].roll==roll)
                        cout << s[i].roll<<" "<<s[i].name<<" "<<s[i].marks<<endl;
        }
    } while(choice!=4);

    return 0;
}
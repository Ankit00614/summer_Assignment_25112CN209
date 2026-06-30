#include <iostream>
using namespace std;

int main() {
    string name;
    double basic,hra,da,total;

    cout<<"Employee Name: ";
    getline(cin,name);

    cout<<"Basic Salary: ";
    cin>>basic;

    hra=0.20*basic;
    da=0.10*basic;

    total=basic+hra+da;

    cout<<"\nSalary Slip\n";
    cout<<"Name: "<<name<<endl;
    cout<<"Basic: "<<basic<<endl;
    cout<<"HRA: "<<hra<<endl;
    cout<<"DA: "<<da<<endl;
    cout<<"Total Salary: "<<total;

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    double balance=0;
    int choice;
    double amount;

    do{
        cout<<"\n1.Deposit\n2.Withdraw\n3.Balance\n4.Exit\n";
        cin>>choice;

        switch(choice){
            case 1:
                cin>>amount;
                balance+=amount;
                break;

            case 2:
                cin>>amount;
                if(amount<=balance)
                    balance-=amount;
                else
                    cout<<"Insufficient Balance";
                break;

            case 3:
                cout<<"Balance: "<<balance;
        }

    }while(choice!=4);

    return 0;
}
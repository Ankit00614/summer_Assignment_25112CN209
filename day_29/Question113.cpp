#include <iostream>
using namespace std;

int main(){
    int choice;
    double a,b;

    do{
        cout<<"\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit\n";
        cin>>choice;

        if(choice>=1 && choice<=4){
            cin>>a>>b;

            switch(choice){
                case 1: cout<<a+b; break;
                case 2: cout<<a-b; break;
                case 3: cout<<a*b; break;
                case 4: cout<<a/b; break;
            }
        }

    }while(choice!=5);

    return 0;
}
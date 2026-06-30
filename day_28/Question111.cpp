#include <iostream>
using namespace std;

int main(){
    int seats=50;
    int book;

    cout<<"Available Seats: "<<seats<<endl;
    cout<<"Seats to Book: ";
    cin>>book;

    if(book<=seats){
        seats-=book;
        cout<<"Booking Successful\n";
        cout<<"Remaining Seats: "<<seats;
    }
    else
        cout<<"Not Enough Seats";

    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand()%100 + 1;
    int guess;

    do {
        cout<<"Guess Number: ";
        cin>>guess;

        if(guess > secret)
            cout<<"Too High\n";
        else if(guess < secret)
            cout<<"Too Low\n";

    } while(guess != secret);

    cout<<"Correct!";
    return 0;
}
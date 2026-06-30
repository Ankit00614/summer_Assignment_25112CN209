#include <iostream>
using namespace std;

int main() {
    int score=0, ans;

    cout<<"Capital of India?\n1.Delhi\n2.Mumbai\n";
    cin>>ans;
    if(ans==1) score++;

    cout<<"2 + 2 = ?\n1.4\n2.5\n";
    cin>>ans;
    if(ans==1) score++;

    cout<<"Score = "<<score;
    return 0;
}
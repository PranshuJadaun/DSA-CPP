#include <iostream>
using namespace std;
int main(){
    cout<<"Enter an Integer : ";
    int i;
    cin>>i;
    if (i%3==0){
        if (i%5==0){
            cout<<"It is divisible by 3 and 5.";
        }
        else {
            cout<<"It is divisible by 3.";
        }
    }
    else if (i%5==0){
        cout<<"It is divisible by 5";
    }
    else {
        cout<<"It is not divisible by 3 and 5";
    }
}
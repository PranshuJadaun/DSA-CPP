#include <iostream>
using namespace std;
int main(){
    cout<<"Enter an Integer : ";
    int i;
    cin>>i;
    if (i%15==0){
        cout<<"It is divisible by 3,5 and 15";
    }
    else if (i%3==0){
            cout<<"It is not divisible by 15 but by 3";
    }
    else if (i%5==0){
            cout<<"It is not divisible by 15 but by 5";
    }
    else {
        cout<<"It is not divisible by 3,5 and 15";
    }
}
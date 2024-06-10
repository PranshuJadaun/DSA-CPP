#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a Integer : ";
    int i;
    cin>>i;
    if(i<=999 && i>=100){
        cout<<"It is 3 digit no.";
    }
    else{
        cout<<"It is not 3 digit no.";
    }
}
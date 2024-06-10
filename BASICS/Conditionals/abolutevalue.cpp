#include <iostream>
using namespace std;
int main(){
    cout<<"Enter an Integer to get absolute value : ";
    int i;
    cin>>i;
    if (i<0){
       cout<<i*(-1);
    }
    else
    {
        cout<<i;
    }
    
}
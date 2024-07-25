/*
    4 4 4 4
    3 3 3 4
    2 2 3 4
    1 2 3 4
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p=n;
    for(int i=1; i<=n; i++){
        int pin=p;
        for(int j=1; j<=n; j++){
            if(pin<j){
            pin++; 
            cout<<pin;
            }
            else cout<<p;}
        p=p-1;
        cout<<endl;
    }
}
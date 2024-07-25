/*
    4 4 4 4 4 4 4
    4 3 3 3 3 3 4
    4 3 2 2 2 3 4
    4 3 2 1 2 3 4
    4 3 2 2 2 3 4
    4 3 3 3 3 3 4
    4 4 4 4 4 4 4
        Observation
    4 4 4 4 | 4 4 4
    4 3 3 3 | 3 3 4
    4 3 2 2 | 2 3 4
    4 3 2 1 | 2 3 4
    ---------------
    4 3 2 2 | 2 3 4
    4 3 3 3 | 3 3 4
    4 4 4 4 | 4 4 4
    [Number Spiral]
    n = 4 
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of number spiral : ";
    cin>>n;
    int box1;
    int p=n;
    for(int i=1; i<=n; i++){
        box1=n;
        for(int j=1; j<=n; j++){
            if(i>j){
                cout<<box1<<" ";
                box1--;
            }
            else{
                cout<<box1<<" ";
            }
        }
        int pin=p;
        for(int j=2; j<=n; j++){
            if(pin<j){
                pin++; 
                cout<<pin<<" ";
            }
            else cout<<p<<" ";
        }
        p=p-1;
        cout<<endl;
    }
    for(int i=1; i<=n-1; i++){
        int l=n;
        for(int j=1; j<=n; j++){
            cout<<l;
        }
    }
}

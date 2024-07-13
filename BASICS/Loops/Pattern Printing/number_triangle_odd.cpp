/*
    1
    1 3
    1 3 5
    1 3 5 7
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of odd Number Triangle : ";
    cin>>n;
    for(int i=1; n>=i; i++){
        for(int j=1; i>=j; j++){
            cout<<j+(j-1);
        }
        cout<<endl;
    }
}